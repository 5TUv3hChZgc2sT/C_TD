#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int NombreChiffre(long int valeur) {
    if (valeur == 0) {
        return 1;
    }
    if (valeur < 0) {
        valeur = -valeur;  // valeur absolue
    }

    int nombre = 0;
    while (valeur != 0) {
        valeur /= 10;
        nombre++;
    }
    return nombre;
}

void main() {
    long int val = 0;
    printf("Introduire un nombre: ");
    scanf("%ld", &val);

    int N = NombreChiffre(val);
    printf("Le nombre %ld a %d chiffres.\n", val, N);
}
