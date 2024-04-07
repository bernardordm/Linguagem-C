/*
 ============================================================================
 Name        : FatorialRecursivo1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int somaInteiros(n){

    if(n==0){return 0;}

   else {return  n+ somaInteiros(n-1);}

}
int main (void){
    int numero;
    printf("digite um numero:\n");
    scanf("%d", &numero);

    printf("a soma dos %d primeiros números é %d ", numero,somaInteiros(numero));
}