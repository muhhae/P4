/*YOU CAN EDIT THIS FILE*/
/*
The Archer is a mid-tier unit.
The Archer has 5 Health and 20 Attack. It takes 5 Gold to train an Archer.

Inherit from Troops class
*/

#ifndef _ARCHER_HPP
#define _ARCHER_HPP

#include "troops.hpp"

class Archer : public Troops
{
    private:
      /* data */
    public:
      Archer()
      {
        setAtk(20);
        setHp(5);
        setPrice(5);
        setName("Archer");
      }
};

#endif

