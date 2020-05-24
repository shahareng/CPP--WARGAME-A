#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;


class ParamedicCommander: public Soldier
{
public:
    ParamedicCommander(const int type, int hp=200, int damage=50) : Soldier(type, hp, damage) {} //full
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};