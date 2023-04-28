#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[7];
    int i;

    for(i = 0; i < 7; i++)
    {
        printf("Digite a posicao %d: ", i);
        scanf("%d",&vet[i]);
    }

    printf("\n");

    for(i = 7 ; i < 0; i--)
    {
        printf("posicao %d \n ", i);
       
    }




}