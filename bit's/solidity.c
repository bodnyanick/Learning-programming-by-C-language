#include <stdio.h>
#include <string.h>

//! ПОБИТОВОЕ отрицание NOT (~)
/*
void print_binary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    unsigned int x = 5;
    
    printf("x = %u (", x); print_binary(x); printf(")\n");
    
    unsigned int result = ~x;
    
    printf("~x = %u (", result); print_binary(result); printf(")\n");
    
    return 0;
}
*/
//! ОБъяснение:
/*
x = 5 (0000000000000101)
~x = 4294967290 (1111111111111010)
Объяснение:
5 в двоичном виде: 0101 При побитовой отрицании (~) мы инвертируем каждый бит: ~0101 = 1010 
*/
//! ПОБИТОВОЕ исключающее ИЛИ/XOR (^)
/*
void print_binary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}


int main() {
    unsigned int x = 5;
    unsigned int y = 6;
    unsigned int result = x ^ y;

    printf("x = %u (", x); print_binary(x); printf(") \n");
    printf("y = %u (", y); print_binary(y); printf(") \n");
    printf("x ^ y = %u (", result); print_binary(result); printf(") \n");
    return 0;
}
*/
//! ОБъяснение:
/*
x = 5 (0000000000000101)
y = 6 (0000000000000110)
x ^ y = 3 (0000000000000011)
Объяснение:
5 в двоичном виде: 0101 6 в двоичном виде: 0110 При побитовом исключающем ИЛИ (^) мы устанавливаем 1 только в тех разрядах, где операнды различны: 0101 ^ 0110 = 0011 */

//! ПОБИТОВОЕ ИЛИ/OR (|)
/*
void print_binary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i)&1);
    }
    printf("\n");
}

int main() {
    unsigned int x = 5;
    unsigned int y = 6;
    unsigned int result = x | y;

    printf("x = %u (", x); print_binary(x); printf(") \n");
    printf("y = %u (", y); print_binary(y); printf(") \n");
    printf("x | y = %u (", result); print_binary(result); printf(") \n");
    return 0;
}
*/
//! ОБъяснение:
/*
x = 5 (0000000000000101)
y = 6 (0000000000000110)
x | y = 7 (0000000000000111)
Объяснение:

5 в двоичном виде: 0101
6 в двоичном виде: 0110
При побитовом ИЛИ (|) мы добавляем 1 к каждому разряду, где хотя бы один из операндов имеет 1:
0101 | 0110 = 0111
*/
    
//! ПОБИТОВОЕ И/AND (&)

/*
void print_binary(unsigned int n){
    for (int i = 31; i >=0 ; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main (){  
    unsigned int x = 5;

    unsigned int y = 6;
    unsigned int result = x & y;

    printf("x = %u (", x); print_binary(x); printf(") \n");
    printf("y = %u (", y); print_binary(y); printf(") \n");
    printf("x & y = %u (", result); print_binary(result); printf(") \n");
    return 0;
}
*/
//! ОБъяснение:
/*
x = 5 (0000000000000101)
y = 6 (0000000000000110)
x & y = 4 (0000000000000100)
Объяснение:

5 в двоичном виде: 0101
6 в двоичном виде: 0110
При побитовом И (&) мы устанавливаем 1 только в тех разрядах, где оба операнда имеют 1
*/
