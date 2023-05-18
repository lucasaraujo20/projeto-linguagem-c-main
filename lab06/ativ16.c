#include <stdio.h>
#include <string.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    char descricao[61];
    struct data dataCompromisso;
};

int main()
{
    struct compromisso agenda[5];

   
    for (int i = 0; i < 5; i++)
    {
        printf("Compromisso %d\n", i + 1);
        printf("Digite a descricao (maximo 60 letras): ");
        fgets(agenda[i].descricao, sizeof(agenda[i].descricao), stdin);
        agenda[i].descricao[strcspn(agenda[i].descricao, "\n")] = '\0';

        printf("Digite a data (DD/MM/AAAA): ");
        scanf("%d/%d/%d", &agenda[i].dataCompromisso.dia, &agenda[i].dataCompromisso.mes, &agenda[i].dataCompromisso.ano);

        printf("\n");
    }

   
    int mes, ano;
    do
    {
        printf("Digite o mes (1-12) e o ano (AAAA) para visualizar os compromissos (M A): ");
        scanf("%d %d", &mes, &ano);

        if (mes == 0)
            break;

        printf("\nCompromissos do mes %d do ano %d:\n", mes, ano);
        int encontrados = 0;
        for (int i = 0; i < 5; i++)
        {
            if (agenda[i].dataCompromisso.mes == mes && agenda[i].dataCompromisso.ano == ano)
            {
                printf("Descricao: %s\n", agenda[i].descricao);
                printf("Data: %02d/%02d/%04d\n", agenda[i].dataCompromisso.dia, agenda[i].dataCompromisso.mes, agenda[i].dataCompromisso.ano);
                printf("\n");
                encontrados++;
            }
        }

        if (encontrados == 0)
        {
            printf("Nenhum compromisso encontrado para o mes %d do ano %d.\n", mes, ano);
        }

        printf("\n");

    } while (mes != 0);

    return 0;
}
