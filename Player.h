#ifndef RACE_H
#define RACE_H
#include <iostream>

using namespace std;

class Player {
public:
    string name;
    int level;
    int force;
    int maxHP;
    int HP;
    int coins;

    // public:
    Player(const string &name, int maxHP = 100, int force = 5);
    void printInfo();
    ~Player() = default;
    void levelUp();
    int getLevel() const;
    void buff(int f);
    void heal(int hp);
    void damage(int dmg);
};

#endif