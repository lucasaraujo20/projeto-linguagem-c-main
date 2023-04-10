#include <stdio.h>

int is_palindrome(int n) {
    
    int revers = 0, original = n;
    while (original > 0) {
        revers = revers * 10 + original % 10;
        original /= 10;
    }
    return n == revers;
}

int main() {
    int max_palindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }
    printf("Maior palindromo feito a partir do produto de dois numeros de 3 digitos: %d\n", max_palindrome);
    return 0;
}
