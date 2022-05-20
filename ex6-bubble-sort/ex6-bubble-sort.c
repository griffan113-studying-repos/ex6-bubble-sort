#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main() {
	setlocale(LC_ALL, "");

	int numbers[TAM];
	int index, aux;

	printf("Entre com cinco números para preencher o array, e pressione enter após digitar cada um: \n");

	for (index = 0; index < TAM; index++) {
		scanf_s("%d", &numbers[index]);
	}

	printf("Ordem atual dos itens do array:\n");

	for (index = 0; index < TAM; index++) {
		printf("%4d", numbers[index]);
	}

	for (int counter = 1; counter < TAM; counter++) {
		for (index = 0; index < TAM - 1; index++) {
			if (numbers[index] > numbers[index + 1]) {
				aux = numbers[index];
				numbers[index] = numbers[index + 1];
				numbers[index + 1] = aux;
			}
		}
	}

	printf("\nElementos do array em ordem crescente:\n");

	for (index = 0; index < TAM; index++) {
		printf("%4d", numbers[index]);
	}

	printf("\n");

	return 0;
}