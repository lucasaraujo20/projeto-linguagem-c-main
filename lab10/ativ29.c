#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo_vendedor;
    char nome_vendedor[50];
    double valor_da_venda;
    int mes;
} Registro;

void criarArquivo(const char* arquivo) {
    FILE* arquivoPtr = fopen(arquivo, "wb");
    if (arquivoPtr == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }
    fclose(arquivoPtr);
    printf("Arquivo criado com sucesso.\n");
}

void incluirRegistro(const char* arquivo) {
    Registro registro;

    printf("Incluir Registro\n");

    printf("Codigo do Vendedor: ");
    scanf("%d", &registro.codigo_vendedor);

    printf("Nome do Vendedor: ");
    fgets(registro.nome_vendedor, sizeof(registro.nome_vendedor), stdin);


    printf("Valor da Venda: ");
    scanf("%lf", &registro.valor_da_venda);

    printf("Mes: ");
    scanf("%d", &registro.mes);

    FILE* arquivoPtr = fopen(arquivo, "ab");
    if (arquivoPtr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fwrite(&registro, sizeof(Registro), 1, arquivoPtr);
    fclose(arquivoPtr);
    printf("Registro incluido com sucesso.\n");
}

void excluirRegistro(const char* arquivo) {
    int codigo, mes;
    printf("Excluir Registro\n");

    printf("Codigo do Vendedor: ");
    scanf("%d", &codigo);

    printf("Mes: ");
    scanf("%d", &mes);

    FILE* arquivoPtr = fopen(arquivo, "r+b");
    if (arquivoPtr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro registro;
    int encontrado = 0;

    while (fread(&registro, sizeof(Registro), 1, arquivoPtr) == 1) {
        if (registro.codigo_vendedor == codigo && registro.mes == mes) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        fseek(arquivoPtr, -sizeof(Registro), SEEK_CUR);
        Registro registroVazio = {0};
        fwrite(&registroVazio, sizeof(Registro), 1, arquivoPtr);
        printf("Registro excluido com sucesso.\n");
    } else {
        printf("Registro nao encontrado.\n");
    }

    fclose(arquivoPtr);
}

void alterarVenda(const char* arquivo) {
    int codigo, mes;
    double novoValor;
    printf("Alterar Valor da Venda\n");

    printf("Codigo do Vendedor: ");
    scanf("%d", &codigo);

    printf("Mês: ");
    scanf("%d", &mes);

    printf("Novo Valor da Venda: ");
    scanf("%lf", &novoValor);

    FILE* arquivoPtr = fopen(arquivo, "r+b");
    if (arquivoPtr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro registro;
