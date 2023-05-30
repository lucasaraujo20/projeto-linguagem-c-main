#include <stdio.h>

void encontrarMinMax(int *vet, int tamanho, int *min, int *max) {
    int *p = vet;
    *min = *max = *p;

    for (int i = 1; i < tamanho; i++) {
        p++;
        if (*p < *min) {
            *min = *p;
        }
        if (*p > *max) {
            *max = *p;
        }
    }
}

int main() {
    int vet[10];
    int min, max;

    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    encontrarMinMax(vet, 10, &min, &max);

    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
