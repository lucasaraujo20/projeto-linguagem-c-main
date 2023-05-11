#include<stdio.H>
#include<string.h>

int main (){

    int tamanho, i;
    char pl[100];

    printf("Digite uma frase ou palavra: ");
    fgets(pl,100,stdin);

    tamanho = strlen(pl);

    for( i = 0; i < tamanho; i++){


        

        if( pl[i] == 'r' && pl[i+1] == 'r' ||  pl[i] == 'R' && pl[i+1] == 'R'){

            pl[i] = 'l';
            pl[i+1] = '\a';

        } else if( pl[i] == 'r' || pl[i] == 'R'){

            pl[i] = 'l';
        }

        printf("%c", pl[i]);
    }

    


    return 0;
}        
            
