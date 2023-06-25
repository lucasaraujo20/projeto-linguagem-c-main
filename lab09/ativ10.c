#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;

    do {
        printf("Digite a quantidade de valores a serem armazenados maior ou igual a 10: ");
        scanf("%d", &tamanho);
    } while (tamanho < 10);

    double* vetor = (double*)malloc(tamanho * sizeof(double));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa\n");
        return 1;
    }

    srand(time(NULL)); 

    for (int i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 101); 
    }

    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
