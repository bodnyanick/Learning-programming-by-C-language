#include <stdio.h>
#include <string.h>
#include "binary.h"


int main (){
    unsigned char ch = 0x84;

    print_bits_state(ch);
    printf("\n");
    print_bits_state_shift(ch);
    printf("\n");
    // (aCh >> i) & BIT_1)
    // 01111111 - есть число
    // 01111111 >> 7 - сдвигаем вправо на 7 бита
    // 00000000 - новое значение 
    return 0;
}


//! ПРИМЕР №6
/*void print_bits_state(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & BIT_8) ? 1 : 0);
    printf("%i", (aCh & BIT_7) ? 1 : 0);
    printf("%i", (aCh & BIT_6) ? 1 : 0);
    printf("%i", (aCh & BIT_5) ? 1 : 0);
    printf("%i", (aCh & BIT_4) ? 1 : 0);
    printf("%i", (aCh & BIT_3) ? 1 : 0);
    printf("%i", (aCh & BIT_2) ? 1 : 0);
    printf("%i", (aCh & BIT_1) ? 1 : 0);
}

int main (){
    // 0x80 - шестнадцатеричное значение, а 10000000 - его двоичное значение
    // 0xA0 - шестнадцатеричное значение, а 10100000 - его двоичное значение
    //        1000000 = 128
    //        0010000 = 32
    //        1010000 = 160
    //        0000000 = 0
    
    unsigned char a;
    a = 160;
    if ((a & BIT_8_6) == BIT_8_6)
    printf("%i OK!\n", a);
    else
    printf("NO!\n");


    return 0;
}
*/

//! ПРИМЕР №5
/*void print_bits_state(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & 0x80) ? 1 : 0);
    printf("%i", (aCh & 0x40) ? 1 : 0);
    printf("%i", (aCh & 0x20) ? 1 : 0);
    printf("%i", (aCh & 0x10) ? 1 : 0);
    printf("%i", (aCh & 0x08) ? 1 : 0);
    printf("%i", (aCh & 0x04) ? 1 : 0);
    printf("%i", (aCh & 0x02) ? 1 : 0);
    printf("%i", (aCh & 0x01) ? 1 : 0);
}

int main (){
    unsigned char hex = 0x80;
    // 0x80 - шестнадцатеричное значение, а 10000000 - его двоичное значение
    // 0x40 - шестнадцатеричное значение, а 01000000 - его двоичное значение
    // 0x20 - шестнадцатеричное значение, а 00100000 - его двоичное значение
    // 0x10 - шестнадцатеричное значение, а 00010000 - его двоичное значение
    // 0x08 - шестнадцатеричное значение, а 00001000 - его двоичное значение
    // 0x04 - шестнадцатеричное значение, а 00000100 - его двоичное значение
    // 0x02 - шестнадцатеричное значение, а 00000010 - его двоичное значение
    // 0x01 - шестнадцатеричное значение, а 00000001 - его двоичное значение
    print_bits_state(hex);
    printf("\n");
    return 0;
}
*/

//! ПРИМЕР №4
/*void print_bits_state(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & 0x80) ? 1 : 0);
    printf("%i", (aCh & 0x40) ? 1 : 0);
    printf("%i", (aCh & 0x20) ? 1 : 0);
    printf("%i", (aCh & 0x10) ? 1 : 0);
    printf("%i", (aCh & 0x08) ? 1 : 0);
    printf("%i", (aCh & 0x04) ? 1 : 0);
    printf("%i", (aCh & 0x02) ? 1 : 0);
    printf("%i", (aCh & 0x01) ? 1 : 0);
}

int main (){
    unsigned char hex = 0xF6;
    // F6 - F+6 = 11110110, где F6 - шестнадцатеричное значение, а 11110110 - его двоичное значение
    // F - 1111 = (2^3) + (2^2) + (2^1) + (2^0) = 8 + 4 + 2 + 1 = 15
    // 6 - 0110 = (2^2) + (2^1) = 4 + 2 = 6
    print_bits_state(hex);
    printf("\n");
    return 0;
}
*/

//! ПРИМЕР №3
/*
void print_bits_state(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & 0x80) ? 1 : 0);
    printf("%i", (aCh & 0x40) ? 1 : 0);
    printf("%i", (aCh & 0x20) ? 1 : 0);
    printf("%i", (aCh & 0x10) ? 1 : 0);
    printf("%i", (aCh & 0x08) ? 1 : 0);
    printf("%i", (aCh & 0x04) ? 1 : 0);
    printf("%i", (aCh & 0x02) ? 1 : 0);
    printf("%i", (aCh & 0x01) ? 1 : 0);
}

int main (){
    unsigned char dec = 65; // десятичное значение
    unsigned char hex = 0x41; // шестнадцатеричное значение, где ОДИН разряд - 4 бита
    unsigned char oct = 0101; // восьмеричное значение
    unsigned char bin = 0b01000001; // двоичное значение

    printf("%i - десятичное значение\n", dec);
    printf("%i - шестнадцатеричное значение\n", hex);
    printf("%i - восьмеричное значение\n", oct);
    printf("%i - двоичное значение\n", bin);

    return 0;
}
*/

//! ПРИМЕР №2
/*
void print_bits_state(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & 0x80) ? 1 : 0);
    printf("%i", (aCh & 0x40) ? 1 : 0);
    printf("%i", (aCh & 0x20) ? 1 : 0);
    printf("%i", (aCh & 0x10) ? 1 : 0);
    printf("%i", (aCh & 0x08) ? 1 : 0);
    printf("%i", (aCh & 0x04) ? 1 : 0);
    printf("%i", (aCh & 0x02) ? 1 : 0);
    printf("%i", (aCh & 0x01) ? 1 : 0);
}

int main (){
    unsigned char a = 45; // 00101101
    unsigned char b = 98; // 01100010
    
    print_bits_state(a & b); // 32: 00100000
    printf("\n");
    print_bits_state(a | b); // 111: 01101111
    printf("\n");
    print_bits_state(a ^ b); // 79: 01001111
    printf("\n");
    print_bits_state(~a); // 210: 11010010
    printf("\n");
    return 0;
}
*/

//! ПОБИТОВОЕ И/AND (&) (КАК УМНОЖЕНИЕ)
/*
    1 & 1 = 1;
    1 & 0 = 0;
    0 & 1 = 0;
    0 & 0 = 0;
*/
//! ПОБИТОВОЕ ИЛИ/OR (|) (КАК СЛОЖЕНИЕ)
/*
    1 | 1 = 1; // НО СИСТЕМА ДВОИЧНАЯ!!!
    1 | 0 = 1;
    0 | 1 = 1;    
    0 | 0 = 0;
*/
//! ПОБИТОВОЕ исключающее ИЛИ/XOR (^)
/*
    1 ^ 1 = 0;
    1 ^ 0 = 1;
    0 ^ 1 = 1;
    0 ^ 0 = 0;
*/
//! ПОБИТОВОЕ отрицание NOT (~) (ЭТО ИНВЕРТИРОВАНИЕ)
/*
    ~1 = 0;
    ~0 = 1;
*/

//! ПРИМЕР №1
/*
void print_bits_state(char aCh){
    printf("%i: ", aCh);
    printf("%i", (aCh & 0x80) ? 1 : 0);
    printf("%i", (aCh & 0x40) ? 1 : 0);
    printf("%i", (aCh & 0x20) ? 1 : 0);
    printf("%i", (aCh & 0x10) ? 1 : 0);
    printf("%i", (aCh & 0x08) ? 1 : 0);
    printf("%i", (aCh & 0x04) ? 1 : 0);
    printf("%i", (aCh & 0x02) ? 1 : 0);
    printf("%i", (aCh & 0x01) ? 1 : 0);
}

int main (){
    print_bits_state(128);
    printf("\n");
    return 0;
}
*/