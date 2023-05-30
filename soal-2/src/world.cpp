/*
 * World class definition
 *
 * You can add another function definitions as you need.
 * You need to implement the populate() and runSimulation() functions.
 * The parameter inside the populate() function is the number of entities
 * You may change the constructor and destructor if you want to.
 */

#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iostream>

#include "world.hpp"


World::World(int w, int h) : width(w), height(h) {}
World::~World() {}

void World::populate(int human, int runner, int stalker, int clicker, int bloater)
{
  for (int i = 0; i < human; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Human(rand() % width + 1, rand() % height + 1)));
  }
  for (int i = 0; i < runner; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Runner(rand() % width + 1, rand() % height + 1)));
  }
  for (int i = 0; i < stalker; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Stalker(rand() % width + 1, rand() % height + 1)));
  }
  for (int i = 0; i < clicker; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Clicker(rand() % width + 1, rand() % height + 1)));
  }
  for (int i = 0; i < bloater; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Bloater(rand() % width + 1, rand() % height + 1)));
  }
}

void World::print()
{
  for (int i = 0; i < m_entity.size(); i++) m_entity[i]->print();
}

void World::runSimulation()
{
  int day = 0;
  int t_human = 0, t_infected = 0, t_runner = 0, t_clicker = 0, t_stalker = 0, t_bloater = 0;
  int human = 0, infected = 0, runner = 0, clicker = 0, stalker = 0, bloater = 0;


  while (1)
  {
    system("cls");
    day++;
    human = 0; infected = 0; runner = 0; clicker = 0; stalker = 0; bloater = 0;
    
    for (int i = 0; i < m_entity.size(); i++)
    {
      if (m_entity[i]->getAlive() == 1)
      {
        if (m_entity[i]->getInfected() == 1)
        {
          if (m_entity[i]->getName() == "Human") infected++;
          else if (m_entity[i]->getName() == "Runner") runner++;
          else if (m_entity[i]->getName() == "Clicker") clicker++;
          else if (m_entity[i]->getName() == "Stalker") stalker++;
          else if (m_entity[i]->getName() == "Bloater") bloater++;
        }
        else human++;
      }
    }

    std::cout<<"\nDay "<<day;
    std::cout<<"\n\nHuman : "<<human;
    std::cout<<"\nInfected : "<<infected;
    std::cout<<"\nRunner : "<<runner;
    std::cout<<"\nStalker : "<<stalker;
    std::cout<<"\nClicker : "<<clicker;
    std::cout<<"\nBloater : "<<bloater<<std::endl;

    for (int i = 0; i < m_entity.size(); i++)
    {
      if (m_entity[i]->getAlive())
      {
        if (m_entity[i]->getAge() >= m_entity[i]->getAgeTransform() && m_entity[i]->getInfected() == 1)
        {
          if (m_entity[i]->getName() == "Human")
          {
            int random = 1 + rand()%10;

            // std::cout<<"Random : "<<random<<std::endl;
            // std::cout<<"Change : "<<m_entity[i]->getTransformChance()<<std::endl;

            if (random <= m_entity[i]->getTransformChance())
            {
              //std::cout<<"New Runner to be expected"<<std::endl;
              m_entity[i] = std::unique_ptr<Entity>(new Runner(m_entity[i]->getPos().getX(), m_entity[i]->getPos().getY()));
            }
            else 
            {
              // std::cout<<"Human Mati"<<std::endl;
              m_entity[i]->setAlive(0);
            }
            
          }
          else
          {
            if (m_entity[i]->getTransformTo() == "Clicker")m_entity[i] = std::unique_ptr<Entity>(new Clicker(m_entity[i]->getPos().getX(), m_entity[i]->getPos().getY()));
            else if (m_entity[i]->getTransformTo() == "Stalker")m_entity[i] = std::unique_ptr<Entity>(new Stalker(m_entity[i]->getPos().getX(), m_entity[i]->getPos().getY()));
            else if (m_entity[i]->getTransformTo() == "Bloater")m_entity[i] = std::unique_ptr<Entity>(new Bloater(m_entity[i]->getPos().getX(), m_entity[i]->getPos().getY()));
          }
        }
      }
    }

    for (int i = 0; i < m_entity.size(); i++) m_entity[i]->setAge(m_entity[i]->getAge()+1);
    
    char quit = getch();
    if (quit == 'q') return;

    for (int j = 0; j < 24; j++)
    {
      for (int i = 0; i < m_entity.size(); i++)
      {
        if (m_entity[i]->getName() != "Human" && m_entity[i]->getAlive() == 1)
        {
          //std::cout<<"Masuk"<<std::endl;
          m_entity[i]->findHuman(&m_entity);
        }
      }
    }

    if (human == 0)
    {
      std::cout<<"\nHumans have been annihilated\n"<<std::endl;
      return;
    }
    if (infected == 0 && runner == 0 && clicker == 0 && stalker == 0 && bloater == 0)
    {
      std::cout<<"\nZombies have been annihilated\n"<<std::endl;
      return;
    }

    if (human == t_human && infected == t_infected && runner == t_runner && clicker == t_clicker && stalker == t_stalker && bloater == t_bloater)
    {
      std::cout<<"\nThe battle turned to stalemate, Simulation Ended\n"<<std::endl;
      return;
    }
    else {
      t_human = human; t_infected = infected; t_runner = runner; t_clicker = clicker; t_stalker = stalker; t_bloater = bloater;
    }

  }
  

}

// You can add another function definitions as you need.
