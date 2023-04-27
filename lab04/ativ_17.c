#include <stdio.h>

int somas(int a, int b);

int main() {
    int num1, num2;
    printf("Digite dois numeros positivos: ");

    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {

        printf("Numeros invalidos\n");
        return 1;
    }
    int soma = somas(num1, num2);

    printf("A soma dos numeros entre %d e %d eh: %d\n", num1, num2, soma);
    return 0;
}


int somas(int a, int b) {
    int soma = 0;
    for (int i = a + 1; i < b; i++) {
        soma += i;
    }
    return soma;
}
