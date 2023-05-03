#include <stdio.h>

int main(){

    int vet[5];
    int i, maior, menor;

    for(i = 0; i < 5; i++)
    {
        printf("posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    maior = menor = 0; 

    for(i = 1; i < 5; i++) 
    {
        if(vet[i] > vet[maior])
        {
            maior = i; 
        }
        else if(vet[i] < vet[menor])
        {
            menor = i; 
        }
    }

    printf("O maior valor eh %d ,na posicao %d\n", vet[maior], maior);
    
    printf("O menor valor eh %d ,na posicao %d\n", vet[menor], menor);

    return 0;
}
