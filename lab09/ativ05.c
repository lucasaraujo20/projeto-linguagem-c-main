#include <stdio.h>
#include <stdlib.h>

int* criarVetor(int tamanho);
void lerVetor(int* vetor, int tamanho);
int contarMultiplos(int* vetor, int tamanho, int numero);
void mostrarMultiplos(int* vetor, int tamanho, int numero);

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int* vetor = criarVetor(N);

    printf("Digite os elementos do vetor:\n");
    lerVetor(vetor, N);

    int X;
    printf("Digite um numero inteiro: ");
    scanf("%d", &X);

    int quantidade = contarMultiplos(vetor, N, X);

    printf("Existem %d multiplos de %d no vetor.\n", quantidade, X);
    printf("Os multiplos de %d no vetor sao: ", X);
    mostrarMultiplos(vetor, N, X);

    free(vetor);

    return 0;
}

int* criarVetor(int tamanho) {
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        exit(1);
    }
    return vetor;
}

void lerVetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int contarMultiplos(int* vetor, int tamanho, int numero) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % numero == 0) {
            contador++;
        }
    }
    return contador;
}

void mostrarMultiplos(int* vetor, int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % numero == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}
