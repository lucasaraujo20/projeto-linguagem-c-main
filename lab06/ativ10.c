#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ned(const void *a, const void *b);

struct pessoa
{
    char nome[100];
    char endereco[70];
    char telefone[70];
};

int main()
{
    int i;

    struct pessoa a[5];

    for (i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome: ");
        gets(a[i].nome);

        setbuf(stdin, NULL);
        printf("Digite o endereco: ");
        gets(a[i].endereco);

        setbuf(stdin, NULL);
        printf("Digite o telefone: ");
        gets(a[i].telefone);
    }
    char *arr[] = {a[0].nome,a[1].nome,a[2].nome,a[3].nome,a[4].nome};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    qsort(arr, n, sizeof(char *), ned);
 
    for (int i = 0; i < n; i++) {
        printf("\nnome:%s\n: ", arr[i]);
        printf("\nendereco:%s\ntelefone:%s\n",a[i].endereco,a[i].telefone);
    }
    return 0;
}

int ned(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}