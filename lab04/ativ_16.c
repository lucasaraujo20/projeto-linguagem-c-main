#include <stdio.h>

void desenhaL(int quantidade);


int main() {
    desenhL(10);
    return 0;
}

void desenhaL(int quantidade) {
    int i;
    for(i = 0; i < quantidade; i++) {
        printf("=");
    }
}