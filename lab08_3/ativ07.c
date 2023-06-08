#include <stdio.h>

void encontrar_maior_elemento(int vetor[], int N, int *maior, int *ocorrencias);

int main() {
    int vetor[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int maior_elemento, numero_ocorrencias;
    encontrar_maior_elemento(vetor, tamanho, &maior_elemento, &numero_ocorrencias);

    printf("Maior elemento: %d\n", maior_elemento);
    printf("Numero de ocorrencias: %d\n", numero_ocorrencias);

    return 0;
}

void encontrar_maior_elemento(int vetor[], int N, int *maior, int *ocorrencias) {
    *maior = vetor[0];
    *ocorrencias = 1;

    for (int i = 1; i < N; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *ocorrencias = 1;
        } else if (vetor[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}
