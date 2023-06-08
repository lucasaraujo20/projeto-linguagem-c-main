#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main() {
    float A, B, C;
    float X1, X2;

    printf("Digite os coeficientes da equacao (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    int num_raizes = raizes(A, B, C, &X1, &X2);

    if (num_raizes == -1) {
        return 0; 
    } else if (num_raizes == 0) {
        printf("A equacao não possui raizes reais.\n");
    } else if (num_raizes == 1) {
        printf("A equacao possui uma raiz real: X = %.2f\n", X1);
    } else {
        printf("A equacaoo possui duas raizes reais: X1 = %.2f, X2 = %.2f\n", X1, X2);
    }

    return 0;
}


int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;

    if (A == 0) {
        printf("Erro: o coeficiente A deve ser diferente de zero.\n");
        return -1;
    }

    if (delta < 0) {
        return 0; 
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2; 
    }
}
