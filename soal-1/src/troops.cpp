#include "include/troops.hpp"

Troops::Troops()
{

}

Troops::~Troops()
{
    // std::cout<<"\nTroops Destroyed\n"<<std::endl;
}

void Troops::print()
{
    std::cout<<"\n"<<name<<"\n\nAtk : "<<atk<<"\nHp : "<<hp<<std::endl;
}

void Troops::Attack(Demon* demon)
{
    demon->defense(atk);
}
void Troops::Defense(int dmg)
{
    hp -= dmg;
    if(hp < 0) hp = 0;
}