#include <iostream>
#include <vector>
#include "SniperCommander.hpp"
#include "Sniper.hpp"

using namespace std;

void SniperCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    Sniper::attack(b, location);
    Soldier* s;
    Soldier* me = (*this)[location];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            if(s->getType() == "Sniper" && s->getPlayer_number() == me->getPlayer_number())
            {
                pair<int,int> index = make_pair(i ,j);
                Sniper::attack(b, index);
            }
        }
    }
}