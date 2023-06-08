#include <stdio.h>

void maior_elemento(int *vet,int n,int *maior);

int main(){
    int k,i,maior;
    printf("Insira K: ");
    scanf("%d",&k);
    int vet[k];
    printf("Insira elementos do vet:\n");
    for (i = 0; i < k; i++)
    {
        scanf("%d",vet+i);
    }
    maior_elemento(vet,k,&maior);
    for (i = 0; i < k; i++)
    {
       printf("%d ",*(vet+i));
    }
    printf("\n Maior elemento: %d",maior);
    
    
    return 0;
}

void maior_elemento(int *vet,int n,int *maior){
    int i;
    *maior = *(vet);
    for (i = 0; i < n; i++)
    {
        if (*maior <= *(vet+i) )
        {
            *maior = *(vet+i);
        }
    }
}