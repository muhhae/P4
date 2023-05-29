/*YOU CAN EDIT THIS FILE*/
/*
The Knight is the weakest unit in the kingdom.
The Knight has 10 Health and 5 Attack. It takes 2 Gold to train a Knight.

Inherit from Troops class
*/
#ifndef _KNIGHT_HPP
#define _KNIGHT_HPP

#include "troops.hpp"

class Knight : public Troops
{
  private:
    /* data */
  public:
    Knight()
    {
      setAtk(5);
      setHp(10);
      setPrice(2);
      setName("Knight");
    }
};

#endif

