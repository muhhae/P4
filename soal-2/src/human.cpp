/*
 * Human Stats:
 * - Attack: 200-600
 * - Defense: 200-400
 */


#include "human.hpp"
// #include <iostream>

Human::Human(int x, int y)
{
    // std::cout<<"humanConst1"<<std::endl;
    setPos(x,y);
    // std::cout<<"humanConst2"<<std::endl;
    setTransformTo("Runner");
    // std::cout<<"humanConst3"<<std::endl;
    setName("Human");
    // std::cout<<"humanConst4"<<std::endl;
    setAgeTransform(1);
    // std::cout<<"humanConst5"<<std::endl;

    setAtk(200 + rand() % 401);
    setDef(200 + rand() % 201);
}
