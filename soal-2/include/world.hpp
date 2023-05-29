/*
 * World class
 *
 * This class represents the world in which the simulation takes place. You can add
 * any member variables or functions you need to this class. The requirement
 * is that you have a constructor that takes in the width and height of the world
 * as parameters, `populate` function that populates the world with entities, and
 * a `runSimulation` function that runs the simulation.
 */

#ifndef _WORLD_HPP
#define _WORLD_HPP

#include <memory>
#include <vector>

#include "entity.hpp"
#include "zombie.hpp"

#include "human.hpp"

#include "runner.hpp"
#include "clicker.hpp"
#include "stalker.hpp"
#include "bloater.hpp"

class World
{
  public:
    World(int w, int h);
    ~World();                                                                    // Destructor
    void populate(int human, int runner, int stalker, int clicker, int bloater); // Populate the world with entities
    void runSimulation();                                                        // Run the simulation
    void print();
    
  private:
    int width;  // Width of the world
    int height; // Height of the world
    std::vector<std::unique_ptr<Entity>> m_entity;
};

#endif