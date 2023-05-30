/*
 * Zombie class definition
 *
 * You can add function definitions as you need.
 */

#include "zombie.hpp"
#include "vectPointer.hpp"

#include <cmath>

Zombie::Zombie()
{
    setInfected(1);
    lethality = 0; radius = 0;
}

void Zombie::findHuman(std::vector<std::unique_ptr<Entity>>* m_entity)
{
    // std::cout<<"Find";
    // int humanIndex = 0;

    int distance;

    bool first = true;

    Entity* closestHuman;

    for (int i = 0; i < m_entity->size(); i++)
    {
        // std::cout<<"tes"<<std::endl;
        if ((*m_entity)[i]->getAlive() != 1 || (*m_entity)[i]->getInfected() == 1) continue;

        if (getPos().distanceTo((*m_entity)[i]->getPos()) < distance || first)
        {
            first = 0;
            distance = getPos().distanceTo((*m_entity)[i]->getPos());
            closestHuman = (*m_entity)[i].get();
        }
    }

    int zombieMenang;

    // std::cout<<"Name : "<<getName()<<std::endl;
    // std::cout<<"Zombie : "<<"("<<getPos().getX()<<" "<<getPos().getY()<<")"<<std::endl;
    // std::cout<<"Human : "<<"("<<getPos().getX()<<" "<<getPos().getY()<<")"<<std::endl;
    // std::cout<<"Jarak : "<<getPos().distanceTo(closestHuman->getPos())<<std::endl;

    // std::cout<<"Radius : "<<(radius)<<std::endl;

    if (getPos().distanceTo(closestHuman->getPos()) <= (radius))
    {
        //std::cout<<"Dalam Radius"<<std::endl;
        zombieMenang = atkHuman(closestHuman);
    }
    else return;

    switch (zombieMenang)
    {
        case 1:
            // std::cout<<"\nZombie Menang"<<std::endl;
            swapPos(closestHuman);
            closestHuman->setInfected(1);
            closestHuman->setTransformChance((10 - lethality));
            break;
        case 2:
            // std::cout<<"Zombie Kalah"<<std::endl;
            swapPos(closestHuman);
            setAlive(0);
            break;
        case 3:
            // std::cout<<"Tie"<<std::endl;
            setAlive(0);
            closestHuman->setAlive(0);
            break;
        default:
            break;
    }
}

int Zombie::atkHuman(Entity* human)
{
    int ZombieEffectiveAttack = std::max(getAtk() - human->getDef(), 0);
    int HumanEffectiveAttack = std::max(human->getAtk() - getDef(), 0);

    if (ZombieEffectiveAttack > HumanEffectiveAttack) return 1;
    else if (ZombieEffectiveAttack < HumanEffectiveAttack) return 2;
    
    return 3;
}