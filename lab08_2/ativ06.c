#include <stdio.h>

void preenchervet(int *vetor, int tamanho, int valor) {
    int *p = vetor;
    while (p < vetor + tamanho) {
        *p = valor;
        p++;
    }
}

int main() {
    int vetor[5];
    int valor;

    printf("Digite o valor para preencher o vetor: ");
    scanf("%d", &valor);

    preenchervet(vetor, 5, valor);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
