// array_operations.c

#include "array_operations.h"
#include <stdio.h>

void d2b(int liczba, int binary[]) {
    for(int c = 0; c < 32; c++) {
        binary[c] = (liczba >> (31 - c)) & 1;
    }
}

void array_operations() {
    int a = 0;
    int binary[32]; // Tablica na posta� binarn�

    printf("Bitowa posta� liczby ca�kowitej\n");
    printf("n = ");
    scanf("%i", &a);

    d2b(a, binary);

    printf("Posta� binarna liczby %i: ", a);
    for(int i = 0; i < 32; i++) {
        printf("%i", binary[i]);
    }
    printf("\n");
}

