#include <iostream>
#include <vector>
#include "FootSoldier.hpp"

using namespace std;

double distance(pair<int,int> location1, pair<int,int> location2) // d = sqrt((x1-x2)^2 + (y1-y2)^2)
{
    double dis1 = pow(location1.first-location2.first, 2);
    double dis2 = pow(location1.second-location2.second, 2);
    double ans = sqrt(dis1+dis2);
    return ans;
}

void FootSoldier::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    double min = 0;
    double dis = 0;
    Soldier* s;
    Soldier* enemy;
    Soldier* me = (*this)[location];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
		    s = (*this)[{i, j}];
			if (s != nullptr && s->getPlayer_number() != me->getPlayer_number())
                pair<int,int> index = make_pair(i ,j);
				dis = distance(location, index);
                if (dis < min)
                {
                    min = dis;
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