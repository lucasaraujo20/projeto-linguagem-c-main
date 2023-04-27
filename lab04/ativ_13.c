#include <stdio.h>


float calculadora(float num1, float num2, char op);

int main() {
    float num1, num2, result;
    char op;

    printf("Digite dois numeros: ");

    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao (+, -, *, /): ");

    scanf(" %c", &op);

    result = calculadora(num1, num2, op);

    printf("Resultado: %.2f\n", result);
    return 0;
}


float calculadora(float num1, float num2, char op) {
    float result;
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Nao eh possivel dividir por zero\n");
                result = 0;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Operacao invalida\n");
            result = 0;
            break;
    }
    return result;
}

