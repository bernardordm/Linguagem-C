/*
 ============================================================================
 Name        : iterativo_recursivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Função recursiva uma linha

int fatorialRecursivoUmaLinha(int c) {
	return (c==0 || c == 1) ? 1 : (c * fatorialRecursivoUmaLinha(c-1));

}
// Função recursiva padrão

int FatorialRecursiva(int n){
	//caso base
	if (n == 0 || n == 1) {
		return 1;
   } else {
	   //Chamada recursiva
	   return n * FatorialRecursiva(n-1);
   }
}
// Solução iterativa

int fatorialComLoop (int n) {
	int resultado =1;
	//utilizando um loop for para multiplicar os números de 1 a n
	for (int i = 1; i <= n; i++) {
		resultado *= i;
	}
	return resultado;

int main(void) {
	int numero = 5;
	printf("o fatorialde %d é: %d\n", numero, fatorialRecursivo(numero));
	//chamando a solução recursiva
}
