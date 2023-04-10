#include <stdio.h>
#include <math.h>

int main() {
    float val;

    printf("Digite um valor: ");
    scanf("%f", &val);

    while (val > 0) {
        printf("quadrado - %.2f\n", pow(val, 2));

        printf("cubo - %.2f\n", pow(val, 3));

        printf("raiz quadrada - %.2f\n", sqrt(val));

        printf("Digite um valor: ");
        scanf("%f", &val);
    }

    printf("Fim \n");

    return 0;
}
