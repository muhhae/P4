/*
 * Zombie class
 *
 * You can add any member variables or functions you need to this class.
 * This class derives from the Entity class.
 */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <vector>
#include <memory>

#include "human.hpp"
#include "entity.hpp"

class Zombie : public Entity
{
    private : 
        int age;

        int lethality;
        int radius;

    public :
        Zombie();

        void findHuman(std::vector<std::unique_ptr<Entity>> m_entity);
        void atkHuman(Human* human);

        int getLethality(){return lethality;}
        int getRadius(){return radius;}

        void setLethality(int lethality){this->lethality = lethality;}
        void setRadius(int radius){this->radius = radius;}

};


#endif