/*
 * Human class
 *
 * You can add any member variables or functions you need to this class.
 * This class derives from the Entity class.
 * Human Stats:
 * - Attack: 200-600
 * - Defense: 200-400
 */

#ifndef _HUMAN_HPP
#define _HUMAN_HPP

#include "entity.hpp"

class Human : public Entity
{
    private :
        int transformChange;
    public :
        Human(int x, int y);
        void setTransformChance(int transformChange){this->transformChange = transformChange;}
        int getTransformChance(){return transformChange;}
};

#endif