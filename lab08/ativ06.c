#include <stdio.h>

int main(){

    int a, b;
    int *p;
    int *q;
    int receb, receb2, receb3, receb4;
    p = &a;
    q = &b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    receb = (*p)*(*q);
    printf("Multi: %d \n", receb);

    receb2 = (*p)-(*q);
    printf("Sub: %d \n", receb2);

    receb3 = (*p)+(*q);
    printf("Adc: %d \n", receb3);

    receb4 = (*p)/(*q);
    printf("Div: %d \n", receb4);





    return 0;
}