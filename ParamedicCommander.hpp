#include <iostream>
#include "Soldier.hpp"


class ParamedicCommander: public Soldier
{
public:
    ParamedicCommander(const int type, int hp=200, int damage=50) : Soldier(type, hp, damage) {} //full
    void attack(Soldier& other);
};