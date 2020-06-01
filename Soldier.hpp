#pragma once

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Soldier
{

protected:
    uint player_number;
    int healthPoints;
    int damage;

public:
    Soldier (uint num, int hp, int damage) : player_number(num), healthPoints(hp), damage(damage) {}

    int getPlayer_number() { return player_number; }
    int getHp() { return healthPoints; }
    void setHp(int hp) { healthPoints = hp; }
    int getDamage() { return damage; }
    bool isAlive() { if (healthPoints>0) return true; else return false; }
    double distance(pair<int,int> location1, pair<int,int> location2) // d = sqrt((x1-x2)^2 + (y1-y2)^2)
    {
        double dis1 = pow(location1.first-location2.first, 2);
        double dis2 = pow(location1.second-location2.second, 2);
        double ans = sqrt(dis1+dis2);
        return ans;
    }

    virtual void attack(vector<vector<Soldier*>> &b, pair<int,int> location) = 0; // change ()
};