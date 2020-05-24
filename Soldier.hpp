#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Soldier
{

protected:
    int type;
    int healthPoints;
    int damage;

public:
    Soldier (int type, int hp, int damage) : type(type), healthPoints(hp), damage(damage) {}

    int getType() { return type; }
    int getHp() { return healthPoints; }
    void setHp(int hp) { healthPoints = hp; }
    int getDamage() { return damage; }
    bool isAlive() { if (healthPoints>0) return true; else return false; }

    virtual void attack(vector<vector<Soldier*>> &b, pair<int,int> location) = 0; // change ()
};