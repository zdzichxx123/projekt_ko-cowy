#include "hex_to_decimal.h"
#include <stdio.h>

// Funkcja przekszta³caj¹ca pojedyncze cyfry szesnastkowe na wartoœci dziesiêtne
int hex_to_dec(char liczby) {
    if (liczby >= '0' && liczby <= '9') {
        return liczby - '0';
    } else if (liczby >= 'a' && liczby <= 'f') {
        return liczby - 'a' + 10;
    } else if (liczby >= 'A' && liczby <= 'F') {
        return liczby - 'A' + 10;
    }
    return -1; // Zwraca -1 dla nieprawid³owych znaków
}

// Funkcja przekszta³caj¹ca ³añcuch szesnastkowy na wartoœæ dziesiêtn¹
int hex_string_to_dec(const char *hex) {
    int wynik = 0;
    int i = 0;

    while (hex[i] != '\0') {
        int wynik1 = hex_to_dec(hex[i]);
        if (wynik1 == -1) {
            printf("Nieprawid³owy znak w ³añcuchu szesnastkowym.\n");
            return -1; // Zwraca -1 w przypadku b³êdu
        }
        wynik = wynik * 16 + wynik1;
        i++;
    }

    return wynik;
}

