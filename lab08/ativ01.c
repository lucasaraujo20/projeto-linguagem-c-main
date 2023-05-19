#include <stdio.h>

int main(){

    int x = 10, y=20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    (p1)++;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("&x: %p\n", &x);
    printf("&y: %p\n", &y);
    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);
    printf("*p1 + *p2: %d\n", *p1 + *p2);
    printf("*(&x): %d\n", *(&x));
    printf("&(*p2): %p\n", &(*p2));



    return 0;
}