#include <stdio.h>

struct Aluno{
    char matricula[100];
    char nome[100];
    char codigo[100];
    float nota1;
    float nota2;
};

int main()
{
    struct Aluno aluno[3];
    int i;
    float media[3];
    for (i = 0; i < 3; i++)
    {
        printf("Matricula:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].matricula);

        printf("Nome:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);

        printf("Codigo:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].codigo);

        printf("Nota 1 :\n");
        scanf("%f", &aluno[i].nota1);
    
        printf("Nota 2 :\n");
        scanf("%f", &aluno[i].nota2);
        
        media[i] = (aluno[i].nota1 + (aluno[i].nota2)*2)/3;
    }
    for ( i = 0; i < 3; i++)
    {
        printf("Aluno: %s || Media: %.2f\n",aluno[i].nome,media[i]);
    }
    return 0;
}































