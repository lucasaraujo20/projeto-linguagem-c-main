#include <stdio.h>
#include <string.h>

int main() {
    char pl[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", pl);

    for (i = 0; i < strlen(pl); i++) {
        if (pl[i] >= 'a' && pl[i] <= 'z') {
            pl[i] = pl[i] - 32; 
        }
    }

    printf("Palavra em maiusculas: %s\n", pl);

    return 0;
}
