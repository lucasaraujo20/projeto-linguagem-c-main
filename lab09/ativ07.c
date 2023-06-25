#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_LOTERIA 6
#define TAMANHO_BILHETE 6

void lerNumeros(int* numeros, int tamanho);
int contarAcertos(const int* numerosSorteados, const int* numerosBilhete, int tamanho);
int* obterNumerosCorretos(const int* numerosSorteados, const int* numerosBilhete, int tamanho, int quantidadeAcertos);

int main() {
    int numerosSorteados[TAMANHO_LOTERIA];
    int numerosBilhete[TAMANHO_BILHETE];

    printf("Digite os numeros sorteados 6 numeros:\n");
    lerNumeros(numerosSorteados, TAMANHO_LOTERIA);

    printf("Digite os numeros do seu bilhete 6 numeros:\n");
    lerNumeros(numerosBilhete, TAMANHO_BILHETE);

    int quantidadeAcertos = contarAcertos(numerosSorteados, numerosBilhete, TAMANHO_LOTERIA);

    int* numerosCorretos = obterNumerosCorretos(numerosSorteados, numerosBilhete, TAMANHO_LOTERIA, quantidadeAcertos);

    printf("Numeros sorteados: ");
    for (int i = 0; i < TAMANHO_LOTERIA; i++) {
        printf("%d ", numerosSorteados[i]);
    }
    printf("\n");

    printf("Seus numeros corretos: ");
    for (int i = 0; i < quantidadeAcertos; i++) {
        printf("%d ", numerosCorretos[i]);
    }
    printf("\n");

    free(numerosCorretos);

    return 0;
}

void lerNumeros(int* numeros, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

int contarAcertos(const int* numerosSorteados, const int* numerosBilhete, int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (numerosBilhete[i] == numerosSorteados[j]) {
                contador++;
                break;
            }
        }
    }
    return contador;
}

int* obterNumerosCorretos(const int* numerosSorteados, const int* numerosBilhete, int tamanho, int quantidadeAcertos) {
    int* numerosCorretos = (int*)malloc(quantidadeAcertos * sizeof(int));
    if (numerosCorretos == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        exit(1);
    }

    int indice = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (numerosBilhete[i] == numerosSorteados[j]) {
                numerosCorretos[indice] = numerosBilhete[i];
                indice++;
                break;
            }
        }
    }

    return numerosCorretos;
}
