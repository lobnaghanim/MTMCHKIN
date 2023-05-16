#include <iostream>
#include "Player.h"

using namespace std;
int main(){
    Player player1("Player1");
    Player player2("Gandalf", 200, 5);
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
    player2.buff(5);
    player2.heal(100);
    player2.damage(201);
    player2.printInfo();
    printf("player2 is knocked out? %d\n", player2.isKnockedOut());
    printf("player3 is knocked out? %d\n", player3.isKnockedOut());
    player2.addCoins(690);
    player2.printInfo();
    printf("player one paid? %d\n", player1.pay(100));
    printf("player two paid? %d\n", player2.pay(100));
    printf("player two attack strength is %d\n", player2.getAttackStrength());
}
