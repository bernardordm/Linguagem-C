/*
 ============================================================================
 Name        : estudos_arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
int vetor [5];

float media;

vetor [0] = 50;
vetor [1] = 40;
vetor [2] = 30;
vetor [3] = 20;
vetor [4] = 10;

media = (vetor [0] + vetor [1] + vetor [2] + vetor [3] + vetor [4]) / 5 ;

printf("o resultado da média é : %d", media);


}
