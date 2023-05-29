/*YOU CAN EDIT THIS FILE*/
/*
Note:
Demon came to Lock World. The Demon has health of 20-999 HP determined at the
time of its creation. The Demon has an attack of 5-99 HP determined at the time
of its creation. The health and attack are RANDOMLY determined when the Demon is
created. The Demon's health and attack are NOT visible.

*/

#ifndef _DEMON_HPP
#define _DEMON_HPP

#include <memory>

class Demon {
  private:
    int atk;
    int hp;
  public:
    Demon(/* args */);
    ~Demon();
    
    void setStat(int hp, int atk){setHp(hp); setAtk(atk);}

    int getHp(){return hp;}
    int getAtk(){return atk;}

    void setHp(int hp){this->hp = hp;}
    void setAtk(int atk){this->atk = atk;}

    void defense(int dmg);

    void print();
};
#endif


