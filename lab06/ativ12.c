#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Card {
    char suit[10];
    char value[10];
};


void shuffle(struct Card* deck, int size) {
    srand(time(NULL));

    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        struct Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    struct Card deck[52];

 
    char suits[4][10] = {"Copas", "Espadas", "Ouros", "Paus"};
    char values[13][10] = {"Ás", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};

    int card_count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            struct Card card;
            strcpy(card.suit, suits[i]);
            strcpy(card.value, values[j]);
            deck[card_count++] = card;
        }
    }

 
    shuffle(deck, 52);

   
    struct Card player1[3];
    struct Card player2[3];

    for (int i = 0; i < 3; i++) {
        player1[i] = deck[i];
        player2[i] = deck[i + 3];
    }

  
    printf("Jogador 1:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s de %s\n", player1[i].value, player1[i].suit);
    }

    printf("\nJogador 2:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s de %s\n", player2[i].value, player2[i].suit);
    }

    return 0;
}
