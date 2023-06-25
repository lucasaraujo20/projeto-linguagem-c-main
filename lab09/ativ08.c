#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 1500

int main() {
    int* vetor = (int*)calloc(TAMANHO_VETOR, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        return 1;
    }


    int contadorZeros = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
    printf("O vetor contem %d valores inicializados com zero.\n", contadorZeros);

    
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] = i;
    }

    printf("Os 10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    printf("Os 10 ultimos elementos do vetor:\n");
    for (int i = TAMANHO_VETOR - 10; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
