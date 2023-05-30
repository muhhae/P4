/*
 * Runner class definition
 *
 * You can add function definitions as you need.
 */
#include "runner.hpp"

Runner::Runner(int x, int y)
{
    setPos(x,y);
    setTransformTo("Stalker");
    setName("Runner");
    setAgeTransform(2);

    setLethality(1);
    setRadius(13);

    setAtk(100 + rand() % 101);
    setDef(100 + rand() % 101);
    
}