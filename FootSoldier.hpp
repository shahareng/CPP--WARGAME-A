#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootSoldier: public Soldier
{
public:
    FootSoldier(uint num, int hp=100, int max=100, int damage=10, string type="FootSoldier") : Soldier(num, hp, max, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};