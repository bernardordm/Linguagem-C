/*
 ============================================================================
 Name        : prj_media_2arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[3][3];
	int array2[3][3];
	int soma;
	float media;


	printf("CALCULADORA DE MÉDIA + DIAGONAL DA MATRIZ\n");
	printf("Digite 9 numeros para formar a primeira matriz:\n");

	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
				printf("Digite o numero da posicao [%d] [%d]\n", i, j);
				scanf(" %d", &array1[i][j]);

			}
	}

	printf("Digite 9 numeros para formar a segunda matriz:\n");

	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
				printf("Digite o numero da posicao [%d] [%d]\n", i, j);
				scanf(" %d", &array2[i][j]);

			}
	}
	printf("MATRIZ 1:\n");
	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
				printf("%d ", array1[i][j]);

			}
			printf("\n");
	}
	printf("MATRIZ 2:\n");
	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
				printf("%d ", array2[i][j]);

			}
			printf("\n");
	}
	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
			soma = soma += array1[i][j];

			}
	}
	for(int i = 0; i<3; i++){
		for(int j= 0; j<3;j++){
			soma = soma += array2[i][j];

			}
	}

	media = soma/18;

	printf("a média é %f \n", media);

	printf("A diagonal principal da matriz 1 é :\n");
	for(int i = 0; i<3; i++){
			printf("%d\n",array1[i] [i]);

	}
	printf("A diagonal principal da matriz 2 é :\n");
	for(int i = 0; i<3; i++){
			printf("%d\n",array2[i] [i]);

	}
}
