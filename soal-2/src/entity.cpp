/*
 * Entity class definition
 *
 * You can add function definitions as you need.
 */

#include "entity.hpp"

std::string Entity::getTransformTo()
{
    if (age >= ageTransform && infected) return transformTo;
}

void Entity::print()
{
    std::cout<<"\n\nname : "<<name<<"\nage : "<<age<<"\natk : "<<atk<<"\ndef : "<<def<<"\ninfected : "<<infected<<"\nageTransform : "<<ageTransform<<"\nTransform To : "<<transformTo<<"\nPos : ("<<pos.getX()<<" "<<pos.getY()<<")"<<std::endl;
}

void Entity::swapPos(Entity* entity)
{
    
}