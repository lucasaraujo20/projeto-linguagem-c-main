#include <stdio.h>

int hor(int hor, int min, int seg);

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas, minutos e segundos : ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    int Tsegundos = hor(horas, minutos, segundos);
    printf("%d horas, %d minutos e %d segundos equivalem a %d segundos\n", horas, minutos, segundos, Tsegundos);

    return 0;
}

int hor(int hor, int min, int seg) {
    int tseg = 0;

    tseg += hor * 3600;
    tseg += min * 60;
    tseg += seg;

    return tseg;
}
