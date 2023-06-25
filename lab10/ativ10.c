#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maax 40


int main() {
    char inputFileName[100], outputFileName[100], cityName[maax + 1], mostPopulousCity[maax + 1];
    int population, maxPopulation = 0;
    FILE *inputFile, *outputFile;

    // Solicitar os nomes dos arquivos de entrada e saída
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", inputFileName);
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", outputFileName);

    // Abrir o arquivo de entrada
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Ler o arquivo de entrada linha por linha
    while (fscanf(inputFile, "%40s%d", cityName, &population) == 2) {
        if (population > maxPopulation) {
            maxPopulation = population;
            strcpy(mostPopulousCity, cityName);
        }
    }


    fclose(inputFile);

 
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    fprintf(outputFile, "%s %d\n", mostPopulousCity, maxPopulation);

 
    fclose(outputFile);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}


