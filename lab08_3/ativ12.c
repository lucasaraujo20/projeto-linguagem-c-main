#include <stdio.h>

void encontrar_min_max(int *V, int tamanho, int *min, int *max);


int main() {
    int vetor[] = {5, 2, 15, 3, 7, 8, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int minimo, maximo;
    encontrar_min_max(vetor, tamanho, &minimo, &maximo);

    printf("Valor minimo: %d\n", minimo);
    printf("Valor maximo: %d\n", maximo);

    return 0;
}

void encontrar_min_max(int *V, int tamanho, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}