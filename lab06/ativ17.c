#include <stdio.h>
#include <string.h>

struct eletrodomestico
{
    char nome[16];
    float potencia;
    float tempo_ativo;
};

int main()
{
    struct eletrodomestico eletrodomesticos[5];
    float consumo_total = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("Eletrodomestico %d\n", i + 1);

        printf("Digite o nome ,maximo 15 letras: ");
        scanf("%15s", eletrodomesticos[i].nome);

        printf("Digite a potencia em kW: ");
        scanf("%f", &eletrodomesticos[i].potencia);

        printf("Digite o tempo ativo por dia (em horas): ");
        scanf("%f", &eletrodomesticos[i].tempo_ativo);

        consumo_total += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo;

        printf("\n");
    }

    float tempo_dias;
    printf("Digite o tempo (em dias): ");
    scanf("%f", &tempo_dias);

    float consumo_total_periodo = consumo_total * tempo_dias;

    printf("\nConsumo total da casa durante %.2f dias: %.2f kWh\n", tempo_dias, consumo_total_periodo);
    printf("Consumo relativo de cada eletrodomestico:\n");

    for (int i = 0; i < 5; i++)
    {
        float consumo_relativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias) / consumo_total_periodo * 100.0;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumo_relativo);
    }

    return 0;
}
