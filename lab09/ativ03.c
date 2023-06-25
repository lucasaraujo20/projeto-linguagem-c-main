#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i;
    int *vetor;
    int countPares = 0, countImpares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa\n");
        return 1;
    }


    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        } else {
            countImpares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", countPares);
    printf("Quantidade de numeros impares: %d\n", countImpares);

    free(vetor);

    return 0;
}
