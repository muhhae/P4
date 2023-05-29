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

#include "world.hpp"


World::World(int w, int h) : width(w), height(h) {}
World::~World() {}

void World::populate(int human, int runner, int stalker, int clicker, int bloater)
{
  for (int i = 0; i < human; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Human(rand() % 101, rand() % 101)));
  }
  for (int i = 0; i < runner; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Runner(rand() % 101, rand() % 101)));
  }
  for (int i = 0; i < stalker; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Stalker(rand() % 101, rand() % 101)));
  }
  for (int i = 0; i < clicker; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Clicker(rand() % 101, rand() % 101)));
  }
  for (int i = 0; i < bloater; i++) 
  {
    m_entity.push_back(std::unique_ptr<Entity>(new Bloater(rand() % 101, rand() % 101)));
  }
}

void World::print()
{
  for (int i = 0; i < m_entity.size(); i++) m_entity[i]->print();
}

void World::runSimulation()
{
  // YOUR CODE HERE
}

// You can add another function definitions as you need.
