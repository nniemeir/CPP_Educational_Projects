#ifndef PLAYER_H_
#define PLAYER_H_

#include<qstring.h>

class playerStats {
public:
    int health;
    int energy;
    int hunger;
    int thirst;
    int warmth;
    int charm;
    QString constructReflection();
};

extern playerStats player;

#endif