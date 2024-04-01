/*
 ============================================================================
 Name        : exercicioElei��es.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int escolherOpcao = 0, cand1 = 0, cand2 = 0;
int main(void) {

	while (escolherOpcao != 4) {

		printf("ELEICAO\n");
		printf("Escolha uma opcao:\n"
				"Votar no candidato 1: 1\n"
				"Votar no candidato 2: 2\n"
				"Apurar resultado: 3\n"
				"Finalizar operação: 4\n");

		scanf("%d", &escolherOpcao);

		switch (escolherOpcao) {

		case 1:
			printf("Voto no Candidato 1 confirmado!\n");
			cand1++;
			break;

		case 2:
			printf("Voto no Candidato 2 confirmado!\n");
			cand2++;
			break;

		case 3:
			if (cand1 > cand2) {
				printf(
						"O candidato 1 venceu com %d votos, contra %d votos do candidato 2",
						cand1, cand2);
			}
			if (cand1 < cand2) {
				printf(
						"O candidato 2 venceu com %d votos, contra %d votos do candidato 1",
						cand1, cand2);
			}

			if (cand1 == cand2) {
				printf(
						"A votação terminou empatada com %d votos para o candidato 1 e %d votos para o candidato 2",
						cand1, cand2);
			}
			break;

		case 4:
			printf("Operacao finalizada.");
			break;
		}
		int i = i++;
	}
}
