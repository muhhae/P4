/*
 * Human Stats:
 * - Attack: 200-600
 * - Defense: 200-400
 */


#include "human.hpp"

Human::Human(int x, int y)
{
    setPos(x,y);

    setTransformTo("Runner");
    setName("Human");
    setAgeTransform(1);

    setAtk(200 + rand() % 601);
    setDef(200 + rand() % 401);
}
