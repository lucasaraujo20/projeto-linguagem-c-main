#include <stdio.h>

int potencia(int x, int z);

int main() {
    int x, z;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &z);
    int resultado = potencia(x, z);
    printf("%d elevado a %d = %d\n", x, z, resultado);
    return 0;
}

int potencia(int x, int z) {
    int resultado = 1;
    for (int i = 1; i <= z; i++) {
        resultado *= x;
    }
    return resultado;
}
