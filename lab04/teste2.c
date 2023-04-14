#include <stdio.h>


int main(){

    int a;
    int seq;

    printf("Digite o posicao: ");
    scanf("%d",&a);

    seq = fibor(a);

    printf("numero: %d\n",seq);

    return 0;
}


int fibor(int n){
    if( n == 0 || n == 1){
        return n;
    }
    else{
        return fibor(n-1) + fibor(n-2);
    }
}