/*
 ============================================================================
 Name        : prj_array_idades1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int idades [10];
  int soma = 0;
  float media;

  printf("Digite a idade de 10 alunos:\n");

  for (int i=0; i<10; i++){
    printf("Aluno %d ", i+1);
    scanf(" %d", &idades[i] );
    soma = soma+idades[i];
  }

  media = (float) soma / 10;
  printf("A media das idades e: %.2f\n", media);

  return 0;

}
