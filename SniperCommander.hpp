#include <iostream>
#include "Soldier.hpp"

class SniperCommander: public Soldier
{

public:

    SniperCommander(int type, int hp=120, int damage=100) : Soldier(type, hp, damage) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);

};