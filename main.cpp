#include <iostream>
#include "Player.h"

using namespace std;
int main(){
    Player player1("Player1");
    Player player2("Player2", 200, 10);
    Player player3("Player3", 300);

    player1.printInfo();
    player2.printInfo();
    player3.printInfo();
    printf("level up player 3\n");
    player3.levelUp();
    player3.levelUp();

    player3.printInfo();
    cout << "player 3 level is " << player3.getLevel() << endl;
    printf("\n\n\n");
    player2.buff(59);
    player2.heal(100);
    player2.damage(201);
    player2.printInfo();
}
