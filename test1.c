#include <stdio.h>
#include <string.h>
int main() {
  char Kid1[12];
  // Kid1 может содержать имя из 11 символов
  // Kid2 будет содержать 7 символов (Maddie плюс нуль-символ)
  char Kid2[] = "Maddie";
  // Kid3 также содержит 7 символов, но это указано дополнительно
  char Kid3[7] = "Andrew";
  // Hero1 будет содержат 7 символов (учитывая нуль-символ!)
  char Hero1[] = "Batman";
  // Hero2 будет на всякий случай иметь дополнительное пространство
  char Hero2[34] = "Spiderman";
  char Hero3[25];
  Kid1[0] = 'K';  // Kid1 определяется посимвольно
  Kid1[1] = 'a';  //Неэффективно, но работает
  Kid1[2] = 't';
  Kid1[3] = 'i';
  Kid1[4] = 'e';
  Kid1[5] = '\0';  // Не забывайте нуль-символ, чтобы С знал, когда
  // завершается строка
  strcpy(Hero3, "The Incredible Hulk");
  printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
  printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
  printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);
  return 0;
}

// СРАВНИ ПЕРВОЕ РЕШЕНИЕ:
#include <limits.h>
#include <stdint.h>
#include <string.h>

#define SS (sizeof(size_t))
#define ALIGN (sizeof(size_t) - 1)
#define ONES ((size_t)-1 / UCHAR_MAX)
#define HIGHS (ONES * (UCHAR_MAX / 2 + 1))
#define HASZERO(x) ((x)-ONES & ~(x)&HIGHS)

void *memchr(const void *src, int c, size_t n) {
  const unsigned char *s = src;
  c = (unsigned char)c;
#ifdef __GNUC__
  for (; ((uintptr_t)s & ALIGN) && n && *s != c; s++, n--)
    ;
  if (n && *s != c) {
    typedef size_t __attribute__((__may_alias__)) word;
    const word *w;
    size_t k = ONES * c;
    for (w = (const void *)s; n >= SS && !HASZERO(*w ^ k); w++, n -= SS)
      ;
    s = (const void *)w;
  }
#endif
  for (; n && *s != c; s++, n--)
    ;
  return n ? (void *)s : 0;
}
// СО ВТОРЫМ РЕШЕНИЕМ:
#include <libc-pointer-arith.h>
#include <string-fzb.h>
#include <string-fzc.h>
#include <string-fzi.h>
#include <string-shift.h>
#include <string.h>

#undef memchr

#ifdef MEMCHR
#define __memchr MEMCHR
#endif

static __always_inline const char *sadd(uintptr_t x, uintptr_t y) {
  return (const char *)(y > UINTPTR_MAX - x ? UINTPTR_MAX : x + y);
}

/* Search no more than N bytes of S for C.  */
void *__memchr(void const *s, int c_in, size_t n) {
  if (__glibc_unlikely(n == 0)) return NULL;

  /* Read the first word, but munge it so that bytes before the array
     will not match goal.  */
  const op_t *word_ptr = PTR_ALIGN_DOWN(s, sizeof(op_t));
  uintptr_t s_int = (uintptr_t)s;

  op_t word = *word_ptr;
  op_t repeated_c = repeat_bytes(c_in);
  /* Compute the address of the last byte taking in consideration possible
     overflow.  */
  const char *lbyte = sadd(s_int, n - 1);
  /* And also the address of the word containing the last byte. */
  const op_t *lword = (const op_t *)PTR_ALIGN_DOWN(lbyte, sizeof(op_t));

  find_t mask = shift_find(find_eq_all(word, repeated_c), s_int);
  if (mask != 0) {
    char *ret = (char *)s + index_first(mask);
    return (ret <= lbyte) ? ret : NULL;
  }
  if (word_ptr == lword) return NULL;

  word = *++word_ptr;
  while (word_ptr != lword) {
    if (has_eq(word, repeated_c))
      return (char *)word_ptr + index_first_eq(word, repeated_c);
    word = *++word_ptr;
  }

  if (has_eq(word, repeated_c)) {
    /* We found a match, but it might be in a byte past the end of the
       array.  */
    char *ret = (char *)word_ptr + index_first_eq(word, repeated_c);
    if (ret <= lbyte) return ret;
  }
  return NULL;
}
#ifndef MEMCHR
weak_alias(__memchr, memchr) libc_hidden_builtin_def(memchr)
#endif
    // ОТВЕТ ВЫВЕДИ НА РУССКОМ ЯЗЫКЕ