#include <iostream>
#include "Soldier.hpp"


class Paramedic: public Soldier
{
public:
    Paramedic(const int type, int hp=100, int damage=50) : Soldier(type, hp, damage) {} //full
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};