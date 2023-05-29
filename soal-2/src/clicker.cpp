/*
 * Clicker class definition
 *
 * You can add function definitions as you need.
 */

#include "clicker.hpp"

Clicker::Clicker(int x, int y)
{
    setPos(x,y);

    setTransformTo("Bloater");
    setName("Clicker");
    setAgeTransform(6);

    setLethality(8);
    setRadius(11);

    setAtk(400 + rand() % 201);
    setDef(300 + rand() % 201);
}