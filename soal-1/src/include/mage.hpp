/*YOU CAN EDIT THIS FILE*/
/*
The Mage is the unit with the highest attack in the kingdom, but it has the
smallest amount of health. The Mage has 1 Health and 100 Attack. It takes 20
Gold to train a Mage.

Inherit from Troops class
*/
#ifndef _MAGE_HPP
#define _MAGE_HPP

#include "troops.hpp"

class Mage : public Troops
{
  private:
    /* data */
  public:
    Mage()
    {
      setAtk(100);
      setHp(1);
      setPrice(20);
      setName("Mage");
    }

};

#endif

