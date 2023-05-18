#include <stdio.h>

#define V 5
#define A 5

struct voo {
    int origem;
    int destino;
};

struct aeroporto {
    int codigo;
    int voos_saida;
    int voos_chegada;
};

int main() {
    struct voo voos[V];
    struct aeroporto aeroportos[A] = {{0}};


    printf("Digite os dados dos voos:\n");
    for (int i = 0; i < V; i++) {
        printf("Voo %d:\n", i + 1);
        printf("Origem: ");
        scanf("%d", &voos[i].origem);
        printf("Destino: ");
        scanf("%d", &voos[i].destino);
        printf("\n");

        if (voos[i].origem >= 0 && voos[i].origem < A) {
            aeroportos[voos[i].origem].voos_saida++;
        }

        if (voos[i].destino >= 0 && voos[i].destino < A) {
            aeroportos[voos[i].destino].voos_chegada++;
        }
    }

   
    printf("Dados dos aeroportos:\n");
    for (int i = 0; i < A; i++) {
        printf("Aeroporto %d\n", i);
        printf("Codigo: %d\n", i);
        printf("Voos de saida: %d\n", aeroportos[i].voos_saida);
        printf("Voos de chegada: %d\n", aeroportos[i].voos_chegada);
        printf("\n");
    }

    return 0;
}
