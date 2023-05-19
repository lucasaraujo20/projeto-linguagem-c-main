#include <stdio.h>


int main(){

    int vet[6];
    int *p[6];
    int i;

    p[6] = &vet[6];

    for( i= 0 ; i < 6; i++){
        printf("Digite os valores do vetor %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n");

    for( i= 0 ; i < 6; i++){
     printf("Vetor %d: %d , endereco:  %p\n", i, vet[i], p[i]);
    }

    return 0;
}