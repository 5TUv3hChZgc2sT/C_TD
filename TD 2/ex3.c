#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int somme_div(int valeur) {
    int somme = 0;

    for (int i = 1; i <= valeur / 2; i++) {
        if (valeur % i == 0) { // si le nombre est divisible
            somme += i;
        }
    }
    return somme;
}

bool parfait(int valeur) {
    if (valeur != 0 && valeur == somme_div(valeur)) {
        return 1;
    }
    else {
        return 0;
    }
}

void main() {
    int val = 0;
    printf("Introduire un nombre: ");
    scanf("%d", &val);

    printf("Resultat: %d", parfait(val));
}
