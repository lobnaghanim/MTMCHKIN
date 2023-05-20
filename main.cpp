#include <iostream>
#include "Player.h"
#include "utilities.h"
#include "Card.h"
#include "Mtmchkin.h"

using namespace std;
int main(){
    Card cards[4];
    CardStats stats(3, 40, 10, 30, 1, 20);
    cards[0] = Card(CardType::Treasure, stats);
    cards[1] = Card(CardType::Buff, stats);
    cards[2] = Card(CardType::Battle, stats);
    cards[3] = Card(CardType::Heal, stats);
    Mtmchkin game("Daniel", cards, 4);
    printf("initial state:\n");
    while(!game.isOver()){
        game.playNextCard();
        printf("game status: %d\n\n", (int)game.getGameStatus());
    }
//    printf("game is over: %d\n", (int)game.isOver());

    //    Player player1("Ali", 100, 0);
//    player1.damage(31);
//    printf("initial state:\n");
//    player1.addCoins(20);
//    player1.printInfo();
//    printf("\n");
//
//
//    CardStats stats(3, 4, 10, 2, 39, 19);
//    Card card(CardType::Battle, stats);
//
//    card.applyEncounter(player1);
//    player1.printInfo();
//    card.printInfo();


    cout << "---------------------------THE END---------------------------" << endl;
}
