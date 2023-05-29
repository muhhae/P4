#include "include/berserker.hpp"

void Berserker::Attack(Demon* demon)
{
    demon->defense(getAtk());
    setAtk(getAtk()*2);

    // std::cout<<"Berserker Attack"<<std::endl;
}
