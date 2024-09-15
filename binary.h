#ifndef BITWISE_TOOLS_H
#define BITWISE_TOOLS_H

#define BIT_8 0x80
#define BIT_7 0x40
#define BIT_6 0x20
#define BIT_5 0x10
#define BIT_4 0x08
#define BIT_3 0x04
#define BIT_2 0x02
#define BIT_1 0x01
#define BIT_8_6 0xA0


//! ЭТО ЦИКЛ
void print_bits_state(unsigned char aCh){
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

//! И ЭТО ЦИКЛ
/*
void print_bits_state_shift(unsigned char aCh){
    int i = 0;
    printf("%i: ", aCh);
    for(i=7; i>=0; --i){
        printf("%i", ((aCh >> i) & BIT_1) ? 1 : 0);
        }
        printf("\n");
}
*/

//! РАЗЛОЖЕННЫЙ ВТОРОЙ ЦИКЛ:

void print_bits_state_shift(unsigned char aCh){
    printf("%i: ", aCh);
    printf("%i", ((aCh >> 7) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 6) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 5) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 4) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 3) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 2) >> BIT_1) ? 1 : 0);
    printf("%i", ((aCh >> 1) >> BIT_1) ? 1 : 0);
    printf("%i\n", ((aCh >> 0) >> BIT_1) ? 1 : 0);
}


#endif // BITWISE_TOOLS_H