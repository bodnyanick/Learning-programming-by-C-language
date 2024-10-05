#include <ctype.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//ТУТ ПРИМЕРЫ ДЯДЬКИ
int main() {
//! МАССИВЫ

//! Фишка в пояснении логики нуль-символа
char str [] = "He\0llo!"; // = "char *str = "Hello";"
printf("%s", str);
printf("\n");

//! Фишка решения в выводе ПринтФов в одном цикле, а не по отдельному (всего было бы 3)
/*int a [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (int i = 0; i < 10; i++){
    printf("old:%i ", a[i]);
    a[i] = rand() % 100; // случайное число от 0 до 100 (это функция rand() генерирует случайные числа)
    printf("new:%i \n", a[i]);
}
*/
return 0;
}