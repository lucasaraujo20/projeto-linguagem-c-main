#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int quantidadeProdutos;

    printf("Digite o numero de produtos a serem cadastrados: ");
    scanf("%d", &quantidadeProdutos);

    Produto* produtos = (Produto*)malloc(quantidadeProdutos * sizeof(Produto));
    if (produtos == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        return 1;
    }

    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("Digite as informacoes do produto %d:\n", i + 1);

        printf("Codigo de identificacao: ");
        scanf("%d", &(produtos[i].codigo));

        printf("Nome do produto: ");
        getchar(); 
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0'; 

        printf("Quantidade disponivel no estoque: ");
        scanf("%d", &(produtos[i].quantidade));

        printf("Preco de venda: ");
        scanf("%f", &(produtos[i].preco));
    }


    float maiorPreco = produtos[0].preco;
    int indiceMaiorPreco = 0;
    for (int i = 1; i < quantidadeProdutos; i++) {
        if (produtos[i].preco > maiorPreco) {
            maiorPreco = produtos[i].preco;
            indiceMaiorPreco = i;
        }
    }


    int maiorQuantidade = produtos[0].quantidade;
    int indiceMaiorQuantidade = 0;
    for (int i = 1; i < quantidadeProdutos; i++) {
        if (produtos[i].quantidade > maiorQuantidade) {
            maiorQuantidade = produtos[i].quantidade;
            indiceMaiorQuantidade = i;
        }
    }

    printf("\nInformacoes do produto com maior preco de venda:\n");
    printf("Codigo de identificacao: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome do produto: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Quantidade disponivel no estoque: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("Preco de venda: %.2f\n", produtos[indiceMaiorPreco].preco);

    printf("\nInformacoes do produto com maior quantidade disponivel no estoque:\n");
    printf("Codigo de identificacao: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome do produto: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade disponivel no estoque: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("Preco de venda: %.2f\n", produtos[indiceMaiorQuantidade].preco);

    free(produtos);

    return 0;
}
