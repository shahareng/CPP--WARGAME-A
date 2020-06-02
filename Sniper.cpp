#include <iostream>
# include <vector>
#include "Sniper.hpp"

using namespace std;

void Sniper::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    double max = 0;
    Soldier* s;
    Soldier* enemy;
    Soldier* me = (*this)[location];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
		    s = (*this)[{i, j}];
			if (s != nullptr && s->getPlayer_number() != me->getPlayer_number())
                int hp = s->getHp();
                if (hp > max)
                {
                    max = hp;
                    enemy = (*this)[{i, j}];
                }
		}
	}
    int damage = me->getDamage();
    int health = enemy->getHp();
    enemy->setHp(health-damage);
    if(!enemy->isAlive())
    {
        delete enemy;
    }
}
