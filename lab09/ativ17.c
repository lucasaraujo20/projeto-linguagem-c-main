#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_INICIAL 10
#define INCREMENTO 10

int main() {
    int tamanho = TAMANHO_INICIAL;
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa\n");
        return 1;
    }

    int numero;
    int quantidadeNumeros = 0;

    printf("Digite os numeros, digite 0 para parar: \n");
    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        vetor[quantidadeNumeros] = numero;
        quantidadeNumeros++;

        if (quantidadeNumeros >= tamanho) {
            int* novoVetor = (int*)malloc((tamanho + INCREMENTO) * sizeof(int));
            if (novoVetor == NULL) {
                printf("Erro ao alocar memoria. Encerrando o programa\n");
                free(vetor);
                return 1;
            }

            for (int i = 0; i < tamanho; i++) {
                novoVetor[i] = vetor[i];
            }

            free(vetor);
            vetor = novoVetor;
            tamanho += INCREMENTO;
        }
    }

    printf("Vetor lido: ");
    for (int i = 0; i < quantidadeNumeros; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
