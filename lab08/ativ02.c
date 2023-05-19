#include <stdio.h>


int main(){

    int a = 10;
    char b = 'A';
    float c = 3.2;
    int *p;
    char *q;
    float *z;

    p = &a;
    printf("O valor eh da variavel 'a' eh: %d \n", *p);
    (*p)++;
    printf("O valor eh da variavel 'a' +1 agora eh: %d \n", *p);

    q = &b;
    printf("O valor eh da variavel 'b' eh: %c \n", *q);
    (*q) = 'B';
    printf("O valor eh da variavel 'b' +1 agora eh: %c \n", *q);

    z = &c;
    printf("O valor eh da variavel 'z' eh: %.2f \n", *z);
    (*z)++;
    printf("O valor eh da variavel 'z' +1 agora eh: %.2f \n", *z);

    



    return 0;
}