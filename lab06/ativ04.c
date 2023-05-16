#include <stdio.h>
#include  <string.h>

struct Comp{
    int matricula;
    char nome[40];
    float nota1, nota2, nota3;
};

int main(){

    struct Comp p[60];
    int i;
    int MaiorNota1 = 0, MaiorMedia = 0, MenorMedia = 0;


    for( i = 1 ; i < 6 ; i++){
        printf("Digite a matricula do aluno %d: ", i);
        scanf("%d", &p[i].matricula);

    }
    printf("\n");
    

    for( i = 1 ; i < 6 ; i++){
        printf("Digite o nome do aluno %d: ", i);
        setbuf(stdin,NULL);
        fgets(p[i].nome,100,stdin);
    }
    printf("\n");
    printf("\n");

    for( i = 1 ; i < 6 ; i++){
        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%f", &p[i].nota1);
    }
    printf("\n");

    for( i = 1 ; i < 6 ; i++){
       printf("Digite a nota 2 do aluno %d: ", i);
       scanf("%f", &p[i].nota2);
   }
   printf("\n");

    for( i = 1 ; i < 6 ; i++){
       printf("Digite a nota 3 do aluno %d: ", i);
       scanf("%f", &p[i].nota3);
    }
   printf("\n");


   for (i = 1; i < 6; i++) {

        if (p[i].nota1 > p[MaiorNota1].nota1) {

            MaiorNota1 = i;
        }
    }

    printf("Aluno com maior nota na primeira prova: \n");
    setbuf(stdin,NULL);
    printf("Maior nota da primeira prova: %.2f \n", p[MaiorNota1].nota1);
    printf("Nome: %s \n", p[MaiorNota1].nome);
    printf("Matricula : %d \n", p[MaiorNota1].matricula);

    printf("\n");


    for (i = 1; i < 6; i++) {

        float mediaAtual = (p[i].nota1 + p[i].nota2 + p[i].nota3) / 3;
        float maiorMedia = (p[MaiorMedia].nota1 + p[MaiorMedia].nota2 + p[MaiorMedia].nota3) / 3;
        if (mediaAtual > maiorMedia) {
            MaiorMedia = i;
        }
    }

    printf("Aluno com maior media geral nas provas: \n ");
    setbuf(stdin,NULL);
    printf("Nota da primeira prova: %.2f \n", p[MaiorMedia].nota1);
    printf("Nota da segunda prova: %.2f \n", p[MaiorMedia].nota2);
    printf("Nota da terceira prova: %.2f \n", p[MaiorMedia].nota3);
    printf("Media geral: %.2f\n", (p[MaiorMedia].nota1 + p[MaiorMedia].nota2 + p[MaiorMedia].nota3) / 3);
    printf("Nome: %s \n", p[MaiorMedia].nome);
    printf("Matricula : %d \n", p[MaiorMedia].matricula);
    printf("\n");


    
    for (i = 1; i < 6; i++) {

        float mediaAtual = (p[i].nota1 + p[i].nota2 + p[i].nota3) / 3;
        float menorMedia = (p[MenorMedia].nota1 + p[MenorMedia].nota2 + p[MenorMedia].nota3) / 3;
        if (mediaAtual < menorMedia) {
            MenorMedia = i;
        }
    }

    printf("Aluno com menor media geral nas provas: \n");
    setbuf(stdin,NULL);
    printf("Nota da primeira prova: %.2f \n", p[MenorMedia].nota1);
    printf("Nota da segunda prova: %.2f \n", p[MenorMedia].nota2);
    printf("Nota da terceira prova: %.2f \n", p[MenorMedia].nota3);
    printf("Media geral: %.2f\n", (p[MenorMedia].nota1 + p[MenorMedia].nota2 + p[MenorMedia].nota3) / 3);
    printf("Nome: %s \n", p[MenorMedia].nome);
    printf("Matricula : %d \n", p[MenorMedia].matricula);
    printf("\n");


    for (i = 0; i < 5; i++) {

        float media = (p[i].nota1 + p[i].nota2 + p[i].nota3) / 3;
        if (media >= 6.0) {
            printf("Aluno %d - Aprovado\n", i + 1);
        } else {
            printf("Aluno %d - Reprovado\n", i + 1);
        }
    }
    
    printf("\n");


    return 0;
}