#include <stdio.h>

int dois(int *a , int *b);

int main(){

    int a , b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);


    dois(&a,&b);

    printf("Maior valor eh: %d e menor: %d \n", a, b);

    return 0;
}

int dois(int *a , int *b){

    int t = *a;

    if( *a > *b){
        *a = *a;
        *b = *b;

    } else if ( *b > *a){
        *a = *b;
        *b = t;
    }

}