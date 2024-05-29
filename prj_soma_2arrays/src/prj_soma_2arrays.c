/*
 ============================================================================
 Name        : prj_soma_2arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    printf("Soma de duas matrizes:\n");
    int matriz1[5];
    int matriz2[5];
    int somaDaMatriz1;
    int somaDaMatriz2;

    printf("Digite 5 números para construir a matriz 1 :\n");

    for(int i; i>5; i++){
    scanf("%d ", &matriz1[i]);
    }

    printf("Digite 5 números para construir a matriz 2 :\n");

    for(int i; i>5; i++){
    scanf("%d ", &matriz2[i]);
    }

    somaDaMatriz1 = matriz1[1] + matriz1[2] + matriz1[3] + matriz1[4] + matriz1[5];

    somaDaMatriz2 = matriz2[1] + matriz2[2] + matriz2[3] + matriz2[4] + matriz2[5];



    printf("O resultado da matriz 1 - %d", somaDaMatriz1);
    printf("O resultado da matriz 2 - %d", somaDaMatriz2);
    return 0;
}
