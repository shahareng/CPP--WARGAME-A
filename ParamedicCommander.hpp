#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "Paramedic.hpp"

using namespace std;


class ParamedicCommander: public Soldier, public Paramedic
{
public:
    ParamedicCommander(uint num, int hp=200, int damage=0, string type="ParamedicCommander") : Soldier(num, hp, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};