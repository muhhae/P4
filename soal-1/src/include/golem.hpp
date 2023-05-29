/*YOU CAN EDIT THIS FILE*/
/*
The Golem, also known as a walking stone, is the unit with the largest amount of
health. The Golem has 100 Health and 1 Attack. It takes 20 Gold to train a
Golem.

Inherit from Troops class
*/

#ifndef _GOLEM_HPP
#define _GOLEM_HPP

#include "troops.hpp"

class Golem : public Troops
{
    private:
      /* data */
    public:
      Golem()
      {
        setAtk(1);
        setHp(100);
        setPrice(20);
        setName("Golem");
      }
};

#endif

