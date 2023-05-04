#include <stdio.h>
#include <string.h>

#define TAM 5

int main() {
    char modelos[TAM][20];
    float consumo[TAM];
    float menor_consumo = 9999.0;
    int indice_menor_consumo;
    int i;

    
    for (i = 0; i < TAM; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d (km/l): ", i + 1);
        scanf("%f", &consumo[i]);
    }

   
    for (i = 0; i < TAM; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }


    printf("\nModelo de carro mais economico: %s\n", modelos[indice_menor_consumo]);

   
    printf("\nConsumo dos carros para percorrer 1000km:\n");
    for (i = 0; i < TAM; i++) {
        printf("%s: %.2f litros\n", modelos[i], 1000.0 / consumo[i]);
    }

    return 0;
}
