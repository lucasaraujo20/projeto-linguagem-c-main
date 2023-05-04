#include <stdio.h>
#include <string.h>

int main() {
  char str[100], l1, l2;
  int i;

  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);

  printf("Digite uma letra L1: ");
  scanf("%c", &l1);

  printf("Digite uma letra L2: ");
  scanf(" %c", &l2); 

  for (i = 0; i < strlen(str); i++) {
    if (str[i] == l1) {
      str[i] = l2;
    }
  }

  printf("String resultante: %s", str);

  return 0;
}
