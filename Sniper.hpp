#include <iostream>
#include "Soldier.hpp"


class Sniper: public Soldier
{
public:

    Sniper(const int type, int hp=100, int damage=50) : Soldier(type, hp, damage) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};