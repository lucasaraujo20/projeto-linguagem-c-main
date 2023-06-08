#include <stdio.h>

int negativos(float *vet, int N);

int main() {
    float vetor[] = {1.5, -2.0, 3.7, -4.2, 5.1, -6.3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int quantidade_negativos = negativos(vetor, tamanho);

    printf("Quantidade de numeros negativos: %d\n", quantidade_negativos);

    return 0;
}

int negativos(float *vet, int N) {
    int contador = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            contador++;
        }
    }

    return contador;
}

