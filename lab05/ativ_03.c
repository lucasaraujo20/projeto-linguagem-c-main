#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[7];
    int i;

    for(i = 0; i < 7; i++)
    {
        printf("posicao %d: ", i);
        scanf("%d",&vet[i]);
    }

    printf("\n");

    for(i = 6 ; i >= 0; i--)
    {
        printf("posicao %d: %d \n", i, vet[i]);
       
    }



    return 0;
}
