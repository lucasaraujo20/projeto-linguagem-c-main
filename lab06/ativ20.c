#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int diferencaDias(struct dma data1, struct dma data2) {
    int totalDias1 = data1.ano * 365 + data1.dia + (data1.mes * 30);
    int totalDias2 = data2.ano * 365 + data2.dia + (data2.mes * 30);

    return totalDias2 - totalDias1;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data, dia mes ano: ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data ,dia mes ano: ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int difDias = diferencaDias(data1, data2);

    printf("Numero de dias decorridos: %d\n", difDias);

    return 0;
}
