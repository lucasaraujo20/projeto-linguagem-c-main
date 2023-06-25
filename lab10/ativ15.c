#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[41];
    int anoNascimento;
};

int calcularIdade(int anoNascimento, int anoCorrente);
 

const char* determinarStatusIdade(int idade);

int main() {

    int anoCorrente;
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];


    printf("Digite o ano corrente: ");
    scanf("%d", &anoCorrente);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);


    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

   
    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    struct Pessoa pessoa;


    while (fscanf(arquivoEntrada, "%40s%d", pessoa.nome, &pessoa.anoNascimento) == 2) {
        int idade = calcularIdade(pessoa.anoNascimento, anoCorrente);
        const char *statusIdade = determinarStatusIdade(idade);
        fprintf(arquivoSaida, "%s - %s\n", pessoa.nome, statusIdade);
    }

    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}


int calcularIdade(int anoNascimento, int anoCorrente) {
    return anoCorrente - anoNascimento;
}


const char* determinarStatusIdade(int idade) {
    if (idade < 18) {
        return "menor de idade";
    } else if (idade > 18) {
        return "maior de idade";
    } else {
        return "entrando na maior idade";
    }
}
