#include <stdio.h>

int somar_arrays(int *vet1, int *vet2, int *soma, int tamanho);

int main() {
    int vet1[] = {1, 2, 3, 4, 5};
    int vet2[] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(vet1) / sizeof(vet1[0]);

    int soma[tamanho];

    if (tamanho != sizeof(vet2) / sizeof(vet2[0])) {
        printf("Tamanhos dos vetores sao diferentes.\n");
        return 0;
    }

    if (somar_arrays(vet1, vet2, soma, tamanho)) {
        printf("Soma dos vetores:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", soma[i]);
        }
        printf("\n");
    }

    return 0;
}

int somar_arrays(int *vet1, int *vet2, int *soma, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        soma[i] = vet1[i] + vet2[i];
    }

    return 1; 
}
