/*
 * Entity class
 *
 * You can add any member variables or functions you need to this class.
 * This class the base class for humans and all zombies.
 */

#ifndef _ENTITY_HPP
#define _ENTITY_HPP

#include "point.hpp"
// #include "myrandom.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <random>

#include <memory>
#include <vector>


class Entity
{
    private :

        bool alive = 1;

        int age;
        int atk;
        int def;

        bool infected = 0;

        int ageTransform;

        std::string transformTo;

        std::string name;

        Point pos;

    public :
        Entity(){age = 0; atk = 0; def = 0; setPos(0,0); infected = 0;}
        Entity(int x, int y){age = 0; atk = 0; def = 0; setPos(x,y);}

        std::string getTransformTo();
        void setTransformTo(std::string transformTo){this->transformTo = transformTo;}

        std::string getName(){return name;}
        void setName(std::string name){this->name = name;}

        bool getInfected(){return infected;}
        void setInfected(bool infected){this->infected = infected;}

        bool getAlive(){return alive;}
        void setAlive(bool alive){this->alive = alive;}

        int getAge(){return age;}
        int getAtk(){return atk;}
        int getDef(){return def;}
        int getAgeTransform(){return ageTransform;}
        
        void setAge(int age){this->age = age;}
        void setAtk(int atk){this->atk = atk;}
        void setDef(int def){this->def = def;}
        void setAgeTransform(int ageTransform){this->ageTransform = ageTransform;}

        void setPos(int x, int y){pos.setX(x); pos.setY(y);}
        void setPos(Point pos){this->pos = pos;}

        Point getPos(){return pos;}

        void swapPos(Entity* entity);

        void print();

        virtual void findHuman(std::vector<std::unique_ptr<Entity>>* m_entity){}
        virtual int atkHuman(){}

        virtual int getLethality(){}
        virtual int getRadius(){}

        virtual void setLethality(int lethality){}
        virtual void setRadius(int radius){}

        virtual void setTransformChance(int transformChange);
        virtual int getTransformChance();

};

#endif