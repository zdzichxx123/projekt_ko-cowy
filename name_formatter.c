#include "name_formatter.h"
#include <stdio.h>
#include <string.h>

void format_name() {
    int limit = 20;
    char forma[limit];
    char imie[limit];
    char nazwisko[limit];
    char opis0[] = "Forma grzecznosciowa (Pan/Pani): ";
    char opis1[] = "Sz. ";
    char opis2[] = "Imie: ";
    char opis3[] = "Nazwisko: ";

    printf("%s", opis0);
    fgets(forma, limit, stdin);
    forma[strlen(forma)-1] = '\0';
    printf("%s", opis2);
    fgets(imie, limit, stdin);
    imie[strlen(imie)-1] = '\0';
    printf("%s", opis3);
    fgets(nazwisko, limit, stdin);
    nazwisko[strlen(nazwisko)-1] = '\0';

    printf("%s %s %s %s %s %s\n", opis1, forma, opis2, imie, opis3, nazwisko);
}
