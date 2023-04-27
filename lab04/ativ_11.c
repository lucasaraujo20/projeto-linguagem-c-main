#include <stdio.h>

float notas(float nota1, float nota2, float nota3, char a);

int main() {

    int i;
    float receb;
    float nota[3];
    char letra;

    for(i = 0; i < 3 ; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &nota[i]);
    }

    printf("\nDigite letra A ou P: \n");
    scanf(" %c", &letra);

    receb = notas(nota[0],nota[1],nota[2],letra);

    printf("A media de %c: %f", letra, receb);

    return 0;
}

float notas(float nota1, float nota2, float nota3, char a )
{
    if( a == 'a' || a == 'A'){

        return  (nota1 + nota2 + nota3 ) / 3;

    }else if( a == 'p' || a == 'P'){

        return (nota1 * 5 + nota2 * 3 + nota3 * 2 ) / (5 + 3 + 2) ;
    }
}
