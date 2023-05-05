#include <stdio.h>
#include <string.h>


int main(){

    char pl[100];
    int i,j, receb;
    

    printf("Digite uma palavra: ");
    fgets(pl,100,stdin);
    //Ex: perguntar se


    receb = strlen(pl);

    for( i = 0; i < receb; i++){

        if( pl[i] == 'r'|| pl[i] == 'R'){

           pl[i] = 'l';

        }
        
    }
      
    /*for( i = 0; i < receb; i++){

        if( pl == r){

        }
    */}
        
    

    
    printf("%s \n",pl);
    
   
    return 0;
}