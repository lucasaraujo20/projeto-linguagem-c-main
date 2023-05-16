#include <stdio.h>
#include <string.h>


struct Aluno{
    char nome[40];
    char curso[100];
    int matricula;
};

int main(){

    struct Aluno p[40];
    int i;

    for( i = 1 ; i < 6 ; i++){
        printf("Digite o nome %d: ", i);
        fgets(p[i].nome,100,stdin);

    }

    printf("\n");

    for( i = 1 ; i < 6 ; i++){
        printf("Digite o nome do curso %d: ", i);
        fgets(p[i].curso,100,stdin);
    }

    printf("\n");

    for( i = 1 ; i < 6 ; i++){
        printf("Digite a Matricula %d: ", i);
        scanf("%d", &p[i].matricula);
    }
    printf("\n");



    for( i = 1 ; i < 6 ; i++){
        printf("Nome %d: %s ",i,p[i].nome);
    }
    printf("\n");

    printf("\n");

    for( i = 1 ; i < 6 ; i++){
        printf("Nome do curso %d: %s ",i,p[i].curso);
    }
    printf("\n");

    printf("\n");

    for( i = 1 ; i < 6 ; i++){
        printf("Matricula %d: %d \n",i,p[i].matricula);
    }
    printf("\n");

    printf("\n");

    return 0;
}