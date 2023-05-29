/*YOU CAN EDIT THIS FILE*/
/*
The Council is the source of decisions. The Council funds the war. The Council
has 100-999 Gold determined at the time of its creation. The amount of Gold is
determined RANDOMLY. The Council will decide to surrender if the simulation
results show that even if they use all of their available Gold, they cannot
defeat the Demon.
*/

#ifndef _COUNCIL_HPP
#define _COUNCIL_HPP

class Council {
    private:
      int gold;
    public:
      Council();
      ~Council();
      void setGold(int gold){this->gold = gold;}
      int getGold(){return gold;}

};

#endif

