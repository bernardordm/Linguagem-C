#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int matriz[3][3];
    int escalar = 0;

    printf("DIGITE 9 NUMEROS PARA CRIAR UMA MATRIZ: \n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o numero da posição [%d][%d]: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz digitada foi:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor para multiplicar todos os elementos do array:\n");
    scanf("%d", &escalar);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz[i][j] = matriz[i][j] * escalar;
        }
    }

    printf("A matriz final foi:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
