#include "Player.h"
#include "utilities.h"
Player::Player(const string& name, int maxHP, int force){
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

void Player::levelUp() {
    if(this->level == 10){
        return;
    }
    this->level++;
}

int Player::getLevel() const {
    return this->level;
}

void Player::buff(int f) {
    this->force += f;
}

void Player::heal(int hp) {
    if(hp < 0){
        return;
    }
    if(this->HP + hp > this->maxHP){
        this->HP = this->maxHP;
    } else {
        this->HP += hp;
    }
}

void Player::damage(int dmg) {
    if(dmg < 0){
        return;
    }
    if(this->HP - dmg < 0){
        this->HP = 0;
    } else {
        this->HP -= dmg;
    }
}
