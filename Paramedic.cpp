#include <iostream>
#include <vector>
#include "Paramedic.hpp"

using namespace std;

void full(Soldier* s)
{
    string type = s->getType();
    switch (type)
    {
        case "FootSoldier":
            s->setHp(100);
            break;
        case "FootCommander":
            s->setHp(150);
            break;
        case "Sniper":
            s->setHp(100);
            break;
        case "SniperCommander":
            s->setHp(120);
            break;
        case "Paramedic":
            s->setHp(100);
            break;
        case "ParamedicCommander":
            s->setHp(200);
            break;
        }
}

void Paramedic::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    Soldier* s;
    Soldier* me = (*this)[location];
    // Up
    pair<int,int> target = make_pair(location.first+1, location.second);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Down
    pair<int,int> target = make_pair(location.first-1, location.second);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);
    
    // Left
    pair<int,int> target = make_pair(location.first, location.second-1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Right
    pair<int,int> target = make_pair(location.first, location.second+1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Up and Right
    pair<int,int> target = make_pair(location.first+1, location.second+1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Up and Left
    pair<int,int> target = make_pair(location.first+1, location.second-1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Down and Right
    pair<int,int> target = make_pair(location.first-1, location.second+1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);

    // Down and Left
    pair<int,int> target = make_pair(location.first-1, location.second-1);
    if(target.first >= b.size() || target.first < 0 || target.second >= b.size() || target.second < 0)
    {
        throw invalid_argument("Outside of the board");
    }
	s = (*this)[target];
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        full(s);
}