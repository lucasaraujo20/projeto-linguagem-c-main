#include <stdio.h>
#include <stdlib.h>

void decToBinary(int number, char *binaryString);

int main() {
    int numbers[10];
    char binaryString[33]; 


    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }


    FILE *arquivoSaida = fopen("binarios.txt", "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        return 1;
    }


    for (int i = 0; i < 10; i++) {
        decToBinary(numbers[i], binaryString);
        fprintf(arquivoSaida, "%s\n", binaryString);
    }


    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}


void decToBinary(int number, char *binaryString) {
    int index = 0;
    while (number > 0) {
        binaryString[index++] = number % 2 + '0';
        number /= 2;
    }
    binaryString[index] = '\0';
}