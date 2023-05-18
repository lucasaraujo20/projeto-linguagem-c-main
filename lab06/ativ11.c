#include <stdio.h>
#include <string.h>

struct boletim
{
    char nome[100];
    char matricula[100];
    double media;
    int aprovado;
};

int main()

{
    struct boletim vet[10];
    int i;
    int num_aprovados = 0;
    int num_reprovados = 0;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite o nome: ");
        setbuf(stdin, NULL);
        fgets(vet[i].nome, sizeof(vet[i].nome), stdin);
        printf("Digite a matricula: ");
        setbuf(stdin, NULL);
        fgets(vet[i].matricula, sizeof(vet[i].matricula), stdin);
        printf("Digite a media final: ");
        scanf("%lf", &vet[i].media);

        if (vet[i].media > 5)
        {
            vet[i].aprovado = 1;
            num_aprovados++;
        }
        else
        {
            vet[i].aprovado = 0;
            num_reprovados++;
        }
    }
    
    printf("Aprovados:\n");
    for (i = 0; i < 10; i++)
    {
        if (vet[i].aprovado)
        {
            printf("Nome: [%s]\n", vet[i].nome);
            printf("Matricula: [%s]\n", vet[i].matricula);
            printf("Media: [%.2lf]\n", vet[i].media);
        }
    }
    
    printf("Reprovados:\n");
    for (i = 0; i < 10; i++)
    {
        if (!vet[i].aprovado)
        {
            printf("Nome: [%s]\n", vet[i].nome);
            printf("Matricula: [%s]\n", vet[i].matricula);
            printf("Media: [%.2f]\n", vet[i].media);
    }
    return 0;
} 
