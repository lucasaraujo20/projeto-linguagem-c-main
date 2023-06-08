#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;

    printf("vetor antes da soma:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    printf("vetor depois da soma:\n");
    for (int i = 0; i < 5; i++) {
        (*p)++; 
        printf("%d ", vet[i]);
        p++;
    }
    printf("\n");

    return 0;
}
