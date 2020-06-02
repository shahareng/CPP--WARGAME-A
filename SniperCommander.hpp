#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "Sniper.hpp"

using namespace std;

class SniperCommander: public Soldier, public Sniper
{

public:

    SniperCommander(uint num, int hp=120, int damage=100, string type="SniperCommander") : Soldier(num, hp, damage, type) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);

};