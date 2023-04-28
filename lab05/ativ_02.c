#include <stdio.h>

int main(){
    int x, y, soma, soma2, soma3, i;
    int vet[8];

    for( i = 0; i < 8; i++)
    {
        printf("Digite a posicao %d: ", i);
        scanf("%d",&vet[i]);
    }

    printf("Digite um valor para o x e o y:");
    scanf("%d %d",&x,&y);

    soma = vet[x];
    soma2 = vet[y];
    soma3 = soma + soma2;

    printf("Valor das posicoes %d eh %d : %d \n",x,y,soma3);
}