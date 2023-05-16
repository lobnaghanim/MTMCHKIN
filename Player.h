#ifndef RACE_H
#define RACE_H
#include <iostream>

using namespace std;

class Player {
    string name;
    int level;
    int force;
    int maxHP;
    int HP;
    int coins;
public:
    Player(const string &name, int maxHP = 100, int force = 5);
    void printInfo();
    ~Player() = default;
};

#endif