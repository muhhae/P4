/*
 * Bloater class
 *
 * You can add any member variables or functions you need to this class.
 * This class derives from the Zombie class.
 * Bloater Stats:
 * - Attack: 500-800
 * - Defense: 600-1000
 * - Lethality: 0.9
 * - Radius: 15
 */

#ifndef BLOATER_HPP
#define BLOATER_HPP



#include "zombie.hpp"

class Bloater : public Zombie
{
    public :
        Bloater(int x, int y);
};

#endif