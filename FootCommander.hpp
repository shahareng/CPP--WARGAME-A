#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootCommander: public Soldier
{
public:

    FootCommander(const int type, int hp=150, int damage=20) : Soldier(type, hp, damage) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};