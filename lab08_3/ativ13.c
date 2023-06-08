#include <stdio.h>

void ler_notas(float *nota1, float *nota2);

void calcular_medias(float nota1, float nota2, float *media_simples, float *media_ponderada);



int main() {
    float nota1, nota2;
    float media_simples, media_ponderada;

    ler_notas(&nota1, &nota2);
    calcular_medias(nota1, nota2, &media_simples, &media_ponderada);

    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}





void calcular_medias(float nota1, float nota2, float *media_simples, float *media_ponderada) {
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + nota2 * 2) / 3;
}


void ler_notas(float *nota1, float *nota2) {
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", nota1);

        if (*nota1 < 0 || *nota1 > 10) {
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
        }
    } while (*nota1 < 0 || *nota1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", nota2);

        if (*nota2 < 0 || *nota2 > 10) {
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
        }
    } while (*nota2 < 0 || *nota2 > 10);
}













