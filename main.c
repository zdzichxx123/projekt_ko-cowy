#include <stdio.h>
#include "binary_converter.h"
#include "calculator.h"
#include "hex_to_decimal.h"
#include "name_formatter.h"
#include "logarithm.h"
#include "array_operations.h"

int main() {
    int choice;
    int liczba;
    int binary[32];
    float a, b, result;

    do {
        printf("\nWybierz opcję:\n");
        printf("1. Konwersja liczby dziesiętnej na binarną\n");
        printf("2. Prosty kalkulator\n");
        printf("3. Konwersja liczby szesnastkowej na dziesiętną\n");
        printf("4. Formatowanie imion i nazwisk\n");
        printf("5. Obliczanie logarytmów\n");
        printf("6. Operacje na tablicach\n");
        printf("0. Wyjście\n");

        printf("Twój wybór: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Podaj liczbę dziesiętną: ");
                scanf("%d", &liczba);
                d2b(liczba, binary);
                printf("Postać binarna liczby %d: ", liczba);
                for(int i = 0; i < 32; i++) {
                    printf("%d", binary[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Podaj pierwszą liczbę: ");
                scanf("%f", &a);
                printf("Podaj drugą liczbę: ");
                scanf("%f", &b);
                printf("Wybierz działanie:\n");
                printf("1. Dodawanie\n");
                printf("2. Odejmowanie\n");
                printf("3. Mnożenie\n");
                printf("4. Dzielenie\n");
                printf("5. Potęgowanie\n");
                printf("6. Obliczanie procentu\n");
                int operation;
                scanf("%d", &operation);
                switch (operation) {
                    case 1:
                        result = add(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    case 2:
                        result = subtract(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    case 3:
                        result = multiply(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    case 4:
                        result = divide(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    case 5:
                        result = power(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    case 6:
                        result = percentage(a, b);
                        printf("Wynik: %.2f\n", result);
                        break;
                    default:
                        printf("Niepoprawny wybór operacji kalkulatora.\n");
                        break;
                }
                break;
            case 3:
                char hex[20];
                printf("Podaj liczbę w systemie szesnastkowym: ");
                scanf("%s", hex);
                int dec_value = hex_string_to_dec(hex);
                if (dec_value != -1) {
                    printf("Wartość dziesiętna: %d\n", dec_value);
                }
                break;
            case 4:

            case 5:
                format_name();
                break;
            case 6:
                array_operations();
                break;
            case 7:
                format_name();
                break;
            case 0:
                printf("Zamykanie programu...\n");
                break;
            default:
                printf("Niepoprawny wybór. Wybierz ponownie.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
