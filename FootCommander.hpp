#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "FootSoldier.hpp"

using namespace std;

class FootCommander: public Soldier, public FootSoldier
{
public:

    FootCommander(uint num, int hp=150, int damage=20, string type="FootCommander") : Soldier(num, hp, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};