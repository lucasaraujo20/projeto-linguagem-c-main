#include <stdio.h>

void consumo(float km, float litros);

int main() {
    float km, litros;
    printf("Digite a distancia percorrida (Km): ");

    scanf("%f", &km);

    printf("Digite a quantidade de litros de gasolina consumidos: ");

    scanf("%f", &litros);

    consumo(km, litros);
    return 0;
}

void consumo(float km, float litros) {

    float km_por_litro = km / litros;

    printf("Consumo: %.2f Km/l\n", km_por_litro);

    if (km_por_litro < 8) {
        printf("venda o carro\n");

    } else if (km_por_litro >= 8 && km_por_litro <= 14) {
        printf("economico\n");

    } else {
        printf("super economico\n");
    }
}
