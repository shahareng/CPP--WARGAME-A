#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class SniperCommander: public Soldier
{

public:

    SniperCommander(int type, int hp=120, int damage=100) : Soldier(type, hp, damage) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);

};