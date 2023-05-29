/*
 * Stalker class definition
 *
 * You can add function definitions as you need.
 */

#include "stalker.hpp"

Stalker::Stalker(int x, int y)
{   
    setPos(x,y);
    setTransformTo("Clicker");
    setName("Stalker");
    setAgeTransform(4);

    setLethality(2);
    setRadius(12);

    setAtk(200 + rand() % 101);
    setDef(200 + rand() % 101);
}