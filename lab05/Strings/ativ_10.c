#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100];
    float valor, desconto, total;

    printf("Digite o nome da mercadoria: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    desconto = valor * 0.1; 
    total = valor - desconto;

    printf("Mercadoria: %s\n", nome);
    printf("Valor total: R$ %.2f\n", valor);
    printf("Desconto (10%%): R$ %.2f\n", desconto);
    printf("Valor a ser pago ah vista: R$ %.2f\n", total);

    return 0;
}
