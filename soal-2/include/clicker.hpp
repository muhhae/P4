/*
 * Clicker class
 *
 * You can add any member variables or functions you need to this class.
 * This class derives from the Zombie class.
 * Clicker Stats:
 * - Attack: 400-600
 * - Defense: 300-500
 * - Lethality: 0.8
 * - Radius: 11
 */

#ifndef _CLICKER_HPP
#define _CLICKER_HPP

#include "zombie.hpp"

class Clicker : public Zombie
{
    public :
        Clicker(int x, int y);
};


#endif