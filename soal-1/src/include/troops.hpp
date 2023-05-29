/*YOU CAN EDIT THIS FILE*/
/*
This is the parent class of Knight, Archer, Golem, Mage, and Berserker
This class need to has some Private Attribute like Health, and Attack. This
class need to has Attack and Deffense function.
*/
#ifndef _TROOP_HPP
#define _TROOP_HPP

#include <iostream>
#include <memory>

#include "demon.hpp"

class Troops {
  private:
    int hp;
    int atk;
    int price;
    std::string name;
  public:
    Troops();
    ~Troops();

    void setStat(int hp, int atk, int price){setHp(hp); setAtk(atk); setPrice(price);}

    void setHp(int hp){this->hp = hp;}
    void setAtk(int atk){this->atk = atk;}
    void setPrice(int price){this->price = price;}
    void setName(std::string name){this->name = name;}

    int getHp(){return hp;}
    int getAtk(){return atk;}
    int getPrice(){return price;}
    std::string getName(){return name;}

    virtual void Attack(Demon* demon);
    void Defense(int dmg);

    void print();
    
};

#endif
