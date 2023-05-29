/*YOU CAN EDIT THIS FILE*/
/*
The Berserker is a Knight addicted to war. The Berserker becomes stronger every
round. The Berserker has 20 Health and 5 Attack. Every round, the Attack stat of
the Berserker doubles. It takes 20 Gold to train a Berserker.

Inherit from Troops class
*/

#ifndef _BERSERKER_HPP
#define _BERSERKER_HPP

#include "troops.hpp"

class Berserker : public Troops
{
    private:
      /* data */
    public:
      Berserker()
      {
        setAtk(5);
        setHp(20);
        setPrice(20);
        setName("Berserker");
      }
      void Attack(Demon* demon);
      
};

#endif
