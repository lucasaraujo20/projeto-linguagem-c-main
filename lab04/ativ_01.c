#include <stdio.h>

int dobro(int a);

int main(){
    
    int j;

    printf("Digite um numero: ");
    scanf("%d",&j);

    j = dobro(j);

    printf("O dobro do numero eh: %d \n",j);

    return 0;
}

int dobro(int a){

    return a*2;
}