/*
 ============================================================================
 Name        : soma_inteiros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main (void) {
int numero = 0;
int soma = 0;
for(int i = 1; i<=4; i++){
	printf("Digite um número para ser somado: ");
fflush(stdout);
scanf("%d", &numero);
soma = soma + numero;

printf("A soma é igual a: %d", soma);
}
}

