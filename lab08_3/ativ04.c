#include <stdio.h>


int ordenar(int *p1,int *p2,int *p3){
    
    int a0,a1;

    if(*p1 == *p2 && *p2 == *p3){
        return 1;
    }

    if(*p1 > *p2 && *p2 > *p3){
        a0 = *p3;
        *p3 = *p1;
        *p1 = a0;
    }
    else if(*p2 > *p1 && *p1 > *p3){
        a0 = *p1;
        *p2 = *p1;
        *p2 = a0;
    }
    else if(*p2 > *p3 && *p3 > *p1){
         a0 = *p2;
         a1 = *p3;
        *p2 = *p1;
        *p3 = a0;
        *p2 = a1;
    }
    else if(*p3 > *p1 && *p1 > *p2){
         a0 = *p2;
        *p2 = *p1;
        *p1 = a0;
    }
    else if(*p1 > *p3 && *p3 > *p2){
        // p1 > p3 > p2
        a0 = *p3;
        *p3 = *p1;
        *p1 = a0;
        a1=*p2;
        *p2 = *p1;
        *p1 = a1;
    }
    return 0;
}

int main(){

    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    ordenar(&a,&b,&c);

    printf(" %d %d %d\n",a,b,c);
    return 0;
}