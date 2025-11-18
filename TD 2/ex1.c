#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// Lire le nombre des lignes
	int N = 0;
	printf("Donner le nombre des lignes: ");
	scanf("%d", &N);

	// Afficher le triangle
	N--; // N = N - 1;
	if (N > 0) { // Car N doit etre >= 2
		for (int i = 0; i < N; i++) {
			for (int j = i; j < N; j++) {
				printf(" ");
			}
			printf("*");
			if (i != 0) {
				for (int j = 0; j < ((i * 2) - 1); j++) {
					printf("o");
				}
				printf("*");
			}
			printf("\n");
		}

		for (int k = 0; k < ((N * 2) + 1); k++) {
			printf("*");
		}
	}
}
