#include <stdio.h>


int main(){

    float mat[3][3];
    int i;

    for( i = 0; i < 9; i++){

        printf("%x \n",mat+i);
    }

    return 0;
} 
