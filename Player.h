#ifndef RACE_H
#define RACE_H
#include <iostream>



class Player {
    std::string m_name;
    int m_level;
    int m_force;
    int m_maxHP;
    int m_HP;
    int m_coins;

public:
    // public:
    explicit Player(const std::string &name, int maxHP = 100, int force = 5);
    void printInfo();
    ~Player() = default;
    Player() = default;
    void levelUp();
    int getLevel() const;
    void buff(int f);
    void heal(int hp);
    void damage(int dmg);
    bool isKnockedOut() const;
    void addCoins(int c);
    bool pay(int amount);
    int getAttackStrength() const;

};

#endif