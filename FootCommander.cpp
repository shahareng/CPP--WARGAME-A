#include <iostream>
#include <vector>
#include "FootCommander.hpp"

using namespace std;


void FootCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    FootSoldier::attack(b, location);
    Soldier* s;
    Soldier* me = (*this)[location];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            if(s->getType() == "FootSoldier" && s->getPlayer_number() == me->getPlayer_number())
            {
                pair<int,int> index = make_pair(i ,j);
                FootSoldier::attack(b, index);
            }
        }
    }
}