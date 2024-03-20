/*
 ============================================================================
 Name        : contadorcigarros.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void calculadoraPagamento() {

  float custo, avista, parcelado2x, parcelado3x;
  int escolheropcao, numparcelas;

  printf("Insira o valor gasto na loja :\n", custo);
  scanf("%f", &custo);

  printf("Informe a forma de pagamento: Digite 1 para pagamento a vista, com "
         "10 %% de desconto para pagamento parcelado em até 2 vezes \n Digite "
         "3 para pagamento parcelado de 3 a 10 vezes\n somente em compras acima de 300 reais",
         escolheropcao);

  scanf("%d", &escolheropcao);


  if (escolheropcao == 1){
    avista = custo - (custo * 0, 1);
    printf("O valor total, com desconto de 10%% aplicado, foi de %.2f reais",
           avista);
  }


  if (escolheropcao == 2) {
    parcelado2x = custo / 2;
    printf("O valor total, será dividido em 2 parcelas de:%.2f", parcelado2x);
  }


      if (escolheropcao == 3 && custo >=300) {

        printf("Digite um número de parcelas de 3 até 10:\n", numparcelas);
        scanf("%d", &numparcelas);
        parcelado3x = custo / numparcelas + (custo * 0, 03 * numparcelas);
        printf("O valor total, será dividido em %d parcelas de:%.2f", numparcelas, parcelado3x);
      }

      else(custo<300);
    {
        printf("O valor inserido é menor que 300 reais, tente novamente");
    }

    }


int main(void) {

  calculadoraPagamento();

  return 0;
}
