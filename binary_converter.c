#include "binary_converter.h"
#include <stdio.h>

void d2b(int liczba, int binary[]){
    for(int c = 0; c < 32; c++){
        binary[c] = (liczba >> (31 - c)) & 1;
    }
}
