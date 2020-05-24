#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootSoldier: public Soldier
{
public:
    FootSoldier(const int type, int hp=100, int damage=10) : Soldier(type, hp, damage) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};