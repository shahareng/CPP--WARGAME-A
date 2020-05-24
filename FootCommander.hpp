#include <iostream>
#include "Soldier.hpp"

class FootCommander: public Soldier
{
public:

    FootCommander(const int type, int hp=150, int damage=20) : Soldier(type, hp, damage) {}
    void attack(Soldier& other);
};