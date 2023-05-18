#include <stdio.h>
#include <string.h>

struct livro
{
    char titulo[31];
    char autor[16];
    int ano;
};

int main()
{
    struct livro livros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Livro %d\n", i + 1);
        printf("Digite o titulo (maximo 30 letras): ");
        scanf("%30s", livros[i].titulo);

        printf("Digite o autor (maximo 15 letras): ");
        scanf("%15s", livros[i].autor);

        printf("Digite o ano: ");
        scanf("%d", &livros[i].ano);

        printf("\n");
    }

    char busca[31];
    printf("Digite o titulo do livro que deseja buscar: ");
    scanf("%30s", busca);

    int encontrados = 0;
    printf("\nLivros encontrados com o titulo '%s':\n", busca);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(livros[i].titulo, busca) == 0)
        {
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("\n");
            encontrados++;
        }
    }

    if (encontrados == 0)
    {
        printf("Nenhum livro encontrado com o titulo '%s'.\n", busca);
    }

    return 0;
}
