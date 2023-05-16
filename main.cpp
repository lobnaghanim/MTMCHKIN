#include <iostream>
#include "Player.h"
#include "utilities.h"
#include "Card.h"

using namespace std;
int main(){
    Player player1("Ali", 100, 0);
    player1.damage(31);
    printf("initial state:\n");
    player1.addCoins(20);
    player1.printInfo();
    printf("\n");


    CardStats stats(3, 4, 10, 2, 39, 19);
    Card card(CardType::Battle, stats);

    card.applyEncounter(player1);
    player1.printInfo();
    card.printInfo();

    cout << "---------------------------THE END---------------------------" << endl;
}
