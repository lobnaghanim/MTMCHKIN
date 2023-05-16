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


    CardStats stats(3, 4, 10, 2, 39, 20);
    Card card(CardType::Buff, stats);

    card.applyEncounter(player1);
    player1.printInfo();

    cout << "---------------------------THE END---------------------------" << endl;
}
