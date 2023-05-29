#include "include/demon.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>


Demon::Demon()
{
    srand(unsigned(time(0)));
    srand(unsigned(rand()));

    setAtk(5 + rand()%95);
    setHp(20 + rand()%980);

}

Demon::~Demon()
{

}

void Demon::defense(int dmg)
{
    hp -= dmg;
    if (hp < 0) hp = 0;
}

void Demon::print()
{
    std::cout<<"\nDemon\n\nAtk : "<<atk<<"\nHp : "<<hp<<std::endl;
}