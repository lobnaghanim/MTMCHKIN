#include "Player.h"
#include "utilities.h"
Player::Player(const string& name, int maxHP, int force){
    this->m_name = name;
    this->m_maxHP = maxHP;
    this->m_HP = maxHP;
    this->m_force = force;
    this->m_level = 1;
    this->m_coins = 0;
}

void Player::printInfo() {
    printPlayerInfo(this->m_name.c_str(), this->m_level, this->m_force, this->m_HP, this->m_coins);
}

void Player::levelUp() {
    if(this->m_level == 10){
        return;
    }
    this->m_level++;
}

int Player::getLevel() const {
    return this->m_level;
}

void Player::buff(int f) {
    this->m_force += f;
}

void Player::heal(int hp) {
    if(hp < 0){
        return;
    }
    if(this->m_HP + hp > this->m_maxHP){
        this->m_HP = this->m_maxHP;
    } else {
        this->m_HP += hp;
    }
}

void Player::damage(int dmg) {
    if(dmg < 0){
        return;
    }
    if(this->m_HP - dmg < 0){
        this->m_HP = 0;
    } else {
        this->m_HP -= dmg;
    }
}

bool Player::isKnockedOut() const {
    if(this->m_HP == 0){
        return true;
    }
    return false;
}

void Player::addCoins(int c){
    if(c < 0){
        return;
    }
    this->m_coins += c;
}

bool Player::pay(int amount) {
    if(amount < 0){
        return false;
    }
    if(this->m_coins - amount >= 0){
        this->m_coins -= amount;
        return true;
    }
    return false;
}

int Player::getAttackStrength() const {
    return this->m_force + this->m_level;
}
