#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct dados
{
    char nome[100];
    char endereco[100];
    char cidade[100];
    char email[100];
    char cep[9];
    int dia;
    int mes;
    int ano;
};

bool verificarAniversario(int dia, int mes, int ano)
{
    if (ano <= 2023 && ano >= 1900)
    {
        if (mes >= 1 && mes <= 12)
        {
            if (dia >= 1 && dia <= 31)
            {
                if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
                {
                    return false;
                }
                if (mes == 2)
                {
                    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                    {
                        if (dia > 29)
                        {
                            return false;
                        }
                    }
                    else if (dia > 28)
                    {
                        return false;
                    }
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}

bool verificarCEP(const char *cep)
{
    if (strlen(cep) != 8)
    {
        return false;
    }
    for (int i = 0; i < 8; i++)
    {
        if (cep[i] < '0' || cep[i] > '9')
        {
            return false;
        }
    }
    return true;
}

bool verificarEmail(const char *email)
{
    int i = 0;
    while (email[i] != '\0')
    {
        if (email[i] == '@')
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    struct dados a;
    
    printf("Digite o nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    
    printf("Digite o endereco: ");
    fgets(a.endereco, sizeof(a.endereco), stdin);
    
    printf("Digite a cidade: ");
    fgets(a.cidade, sizeof(a.cidade), stdin);
    
    do
    {
        printf("Digite o CEP: ");
        fgets(a.cep, sizeof(a.cep), stdin);
        a.cep[strcspn(a.cep, "\n")] = '\0'; 
    } while (!verificarCEP(a.cep));
    
    do
    {
        printf("Digite o e-mail: ");
        fgets(a.email, sizeof(a.email), stdin);
        a.email[strcspn(a.email, "\n")] = '\0'; 
    } while (!verificarEmail(a.email));
    
    do
    {
        printf("Digite a data de nascimento (DD/MM/AAAA): ");
        scanf("%d/%d/%d", &a.dia, &a.mes, &a.ano);
    } while (!verificarAniversario(a.dia, a.mes, a.ano));
    
    printf("\nTodas as informacoes estao corretas!\n");
    
    return 0;
}

