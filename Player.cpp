#include "Player.h"
#include "utilities.h"
Player::Player(const string& name, int maxHP, int force){
    cout << "Player constructor called!!" << endl;
    this->name = name;
    this->maxHP = maxHP;
    this->HP = maxHP;
    this->force = force;
    this->level = 1;
    this->coins = 0;
}

void Player::printInfo() {
    printPlayerInfo(this->name.c_str(), this->level, this->force, this->HP, this->coins);
}
