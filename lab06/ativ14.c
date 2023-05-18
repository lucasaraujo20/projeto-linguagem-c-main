#include <stdio.h>
#include <string.h>

struct carro
{
    char marca[16];
    int ano;
    float preco;
};

int main()
{
    struct carro carros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Carro %d\n", i + 1);
        printf("Digite a marca (maximo 15 letras): ");
        scanf("%s", carros[i].marca);

        printf("Digite o ano: ");
        scanf("%d", &carros[i].ano);

        printf("Digite o preco: ");
        scanf("%f", &carros[i].preco);

        printf("\n");
    }

    float valor;
    do
    {
        printf("Digite um valor para pesquisa (0 para sair): ");
        scanf("%f", &valor);

        if (valor != 0)
        {
            printf("\nCarros com preco menor que %.2f:\n", valor);

            for (int i = 0; i < 5; i++)
            {
                if (carros[i].preco < valor)
                {
                    printf("Marca: %s\n", carros[i].marca);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("Preco: %.2f\n", carros[i].preco);
                    printf("\n");
                }
            }
        }
    } while (valor != 0);

    printf("Programa encerrado.\n");

    return 0;
}
