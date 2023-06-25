#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento, int diaAtual, int mesAtual, int anoAtual);


struct Pessoa {
    char nome[100];
    int dia, mes, ano;
};


int main() {
    char nomeArquivo[100];
    char dataAtual[11];
    int diaAtual, mesAtual, anoAtual;


    printf("Digite o nome do arquivo: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';


    printf("Digite a data atual (DD MM AAAA): ");
    fgets(dataAtual, sizeof(dataAtual), stdin);
    sscanf(dataAtual, "%d %d %d", &diaAtual, &mesAtual, &anoAtual);


    FILE *arquivoEntrada = fopen(nomeArquivo, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }


    FILE *arquivoSaida = fopen("idades.txt", "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    struct Pessoa pessoa;

 
    while (fscanf(arquivoEntrada, "%s %d %d %d", pessoa.nome, &pessoa.dia, &pessoa.mes, &pessoa.ano) == 4) {
        int idade = calcularIdade(pessoa.dia, pessoa.mes, pessoa.ano, diaAtual, mesAtual, anoAtual);
        fprintf(arquivoSaida, "%s %d\n", pessoa.nome, idade);
    }


    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída gerado com sucesso: idades.txt\n");

    return 0;
}


int calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento, int diaAtual, int mesAtual, int anoAtual) {
    int idade = anoAtual - anoNascimento;

    if (mesAtual < mesNascimento || (mesAtual == mesNascimento && diaAtual < diaNascimento)) {
        idade--;
    }

    return idade;
}
