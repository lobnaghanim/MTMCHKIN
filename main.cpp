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


}
