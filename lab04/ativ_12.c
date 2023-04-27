#include <stdio.h>

int soma(int num);

int main() {
    int num, result;

    printf("Digite um numero inteiro maior do que zero: ");

    scanf("%d", &num);

    result = soma(num);

    if (result != -1) {
        printf("A soma dos algarismos do numero %d eh: %d\n", num, result);
    }
    return 0;
}

int soma(int num) {
    int soma = 0;

    if (num <= 0) {

        printf("Número inválido\n");

        return -1;

    } else {

        while (num > 0) {

            soma += num % 10;
            num /= 10;
            
        }
        return soma;
    }
}
