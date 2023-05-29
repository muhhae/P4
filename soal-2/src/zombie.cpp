/*
 * Zombie class definition
 *
 * You can add function definitions as you need.
 */

#include "zombie.hpp"

Zombie::Zombie()
{
    setInfected(1);
    lethality = 0; radius = 0;
}

void Zombie::findHuman(std::vector<std::unique_ptr<Entity>> m_entity)
{

}
void Zombie::atkHuman(Human* human)
{

}