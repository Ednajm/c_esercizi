//Dato un numero intero compreso fra 1 a 12, visualizzare il nome del mese corrispondente (1 = gennaio, 2 = febbraio, ...)
#include <stdio.h>
int main() {
    int n = 8;
    switch (n) {
        case 1:
            printf(" Gennaio\n");
            break;
        case 2:
            printf("Febbraio\n");
            break;;
        case 3:
            printf("Marzo\n");
            break;
        case 4:
            printf("aprile\n");
            break;
        case 5:
            printf("Maggio\n");
            break;
        case 6:
            printf("giugno\n");
            break;
        case 7:
            printf("Luglio\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembre\n");
            break;
        case 10:
            printf("Ottobre\n");
            break;
        case 11:
            printf("Novembre\n");
            break;
        case 12:
            printf("Ducembre\n");
            break;

    }
}
