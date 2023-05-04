#include <stdio.h>


int main()
{
    int i, j, k;
    char opcao;
    float mat[2][2], mat1[2][2];
    printf("Digite uma das opcoes: ('a','b','c','d')\n");
    opcao = getchar();
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
  
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &mat1[i][j]);
        }
    }
    switch (opcao)
    {
    case 'a':
   
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) += (mat1[i][j]);
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        break;
    case 'b':
    
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) -= (mat1[i][j]);
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        break;
    case 'c':

        printf("Digite o valor da constante K:\n");
        scanf("%i", &k);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) += k;
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat1[i][j]) += k;
                printf("%.2f ", mat1[i][j]);
            }
            printf("\n");
        }

        break;
    case 'd':
       
        printf("Matriz A:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        printf("Matriz B:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%.2f ", mat1[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Digite de a A d.\n");
        break;
    }
    return 0;
}
