/*
 ============================================================================
 Name        : prj_alturas_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float vetor[10];
	float menor = 0;
	float maior = 0;


	printf("Digite 10 alturas para serem comparadas:\n");
	printf("Digite a 1 altura :\n");
	scanf(" %f", &vetor[0]);

	maior = vetor[0];
	menor = vetor[0];

	for(int i =1; i<10; i++){
		printf("Digite a %d altura", i+1);
		scanf(" %f", &vetor[i]);

		if (vetor[i] > maior){
			maior = vetor [i];
		}

		if (vetor[i] < menor){
					menor = vetor [i];
				}
	}

	printf("A maior e menor altura são, respectivamente: %.2f %.2f", maior, menor);
	return EXIT_SUCCESS;
}
