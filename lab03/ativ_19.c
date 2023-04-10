#include <stdio.h>

int main() {
    
    int valorSaque, valorNota, quantidadeNota;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int j;

    printf("Digite o valor do saque: ");
    scanf("%d", &valorSaque);

    printf("\nNotas necessarias:\n");

    for (j = 0; j < 7; j++) {
        valorNota = notas[j];
        quantidadeNota = valorSaque / valorNota;
        valorSaque = valorSaque % valorNota;

        if (quantidadeNota > 0) {
            printf("%d nota(s) de R$ %d,00\n", quantidadeNota, valorNota);
        }
    }

    return 0;
}
