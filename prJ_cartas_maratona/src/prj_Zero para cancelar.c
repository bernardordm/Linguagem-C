/*
 ============================================================================
 Name        : Prj_Cartas.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array_cartas[5];
	char resultado;

	for(int i = 0; i < 5; i++){
		printf("Digite a carta escolhida: ");
		fflush(stdout);
		scanf("%d", &array_cartas[i]);

		if(array_cartas[i] > 13){
			printf("Numero de carta Invalido!");
		}
	}

	for(int j = 0; j < 5; j++){
		if(array_cartas[j] > array_cartas[j+1]){
		resultado = 'C';

		}else if(array_cartas[j] < array_cartas[j+1]){
			resultado = 'D';
		}else{
			resultado = 'N';
		}
	}

	 printf("%c", resultado);

	return 0;
}
