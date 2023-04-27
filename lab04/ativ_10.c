
#include <stdio.h>

int maior(int a, int b);

int main(){

    int n1, n2, receb;

    printf("Digite dois numeros (utilizando espaco):  ");
    scanf("%d %d",&n1,&n2);

    receb = maior(n1,n2);

    if( receb == 1){
        printf("O numero maior eh: %d ", n1);
    }else{
        printf(" O numero maior eh: %d ",n2);
    }

    return 0;
}


int maior(int a, int b)
{
    if( a > b ){
        return 1;

    } else if( b > a){
        return 0;
    }

}