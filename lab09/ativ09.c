#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 2; 
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa\n");
        return 1;
    }

    int numero;
    int quantidadeNumeros = 0;

    printf("Digite os numeros digite um numero negativo para parar: \n");
    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }


        if (quantidadeNumeros >= tamanho) {
            tamanho *= 2; 
            int* novoVetor = (int*)realloc(vetor, tamanho * sizeof(int));
            if (novoVetor == NULL) {
                printf("Erro ao realocar memoria. Encerrando o programa\n");
                free(vetor);
                return 1;
            }
            vetor = novoVetor;
        }

        vetor[quantidadeNumeros] = numero;
        quantidadeNumeros++;
    }

    printf("Vetor lido: ");
    for (int i = 0; i < quantidadeNumeros; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
