// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Exemplo de declaração e inicialização de um array de inteiros
    int numeros [5] = { 1, 2, 3, 4, 5 };
    //Exemplos de declaração e inicialização de um array de strings
    char clubes[][30] = {"Cruzeiro", "Atlético Paranaense", "Atlético de Madrid" };
    
    //Loop para percorrer o array e imprimir seus elementos
    printf("Elementos do array de inteiros: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    //Loop para percorrer o array de strings e imprimir os nomes dos clubes
    printf("\nNomes dos clubes: ");
    for (int i = 0; i < 3; i++) {
        printf("%s ", clubes[i]);
    }
    return 0;
}
