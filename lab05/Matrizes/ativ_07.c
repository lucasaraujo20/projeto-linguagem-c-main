#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 5
#define colunas 5

int main() {

  int cartela[linhas][colunas] = {0};
  int i, j, num;
    
  srand(time(NULL)); 

  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      do {
        num = rand() % 99 + 1; 
      } while (busca(cartela, num, i, j)); 

      cartela[i][j] = num; 
    }
  }

  
  printf("Cartela de Bingo:\n");
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("%2d ", cartela[i][j]);
    }
    printf("\n");
  }

  return 0;
}

    int busca(int matriz[linhas][colunas], int num, int lin, int col) {
    int i, j;

  
  for (i = 0; i < colunas; i++) {
    if (matriz[lin][i] == num) return 1;
  }
  for (i = 0; i < linhas; i++) {
    if (matriz[i][col] == num) return 1;
  }

  return 0;
}
