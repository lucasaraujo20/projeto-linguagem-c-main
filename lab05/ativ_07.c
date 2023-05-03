#include <stdio.h>

int main(){

    int vet[6];
    int i, receb_par = 0;
    int receb_impar;

    for( i = 0; i < 6; i++){

        printf(" Digite um numero: ");
        scanf("%d",&vet[i]);
    }


    for( i = 0; i < 6; i++){

       if( vet[i] % 2 == 0){

            printf("Par: %d \n", vet[i]);

            receb_par += vet[i];

        }
    }

    printf("Soma dos pares: %d \n", receb_par);

    printf("\n");

    for( i = 0; i < 6; i++){

        if( vet[i] % 2 != 0){
            
            printf("Impar: %d \n",vet[i]);
            receb_impar ++;

        }
    }

    printf("Quantidade dos impares: %d \n", receb_impar);

 return 0;

}