/*
 * Bloater class definition
 *
 * You can add function definitions as you need.
 */

#include "bloater.hpp"

Bloater::Bloater(int x, int y)
{
    setPos(x,y);
    setName("Bloater");

    setLethality(9);
    setRadius(15);
    
    setAtk(500 + rand() % 301);
    setDef(600 + rand() % 401);
}