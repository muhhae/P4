// Function to run the logic
// Create your unique solution here
/*YOU CAN EDIT THIS FILE*/

#ifndef _GAME_HPP
#define _GAME_HPP

#include <memory>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#include "demon.hpp"
#include "troops.hpp"

#include "archer.hpp"
#include "berserker.hpp"
#include "council.hpp"
#include "golem.hpp"
#include "knight.hpp"
#include "mage.hpp"


class Game
{
    private:
        std::unique_ptr<Demon> m_demon = std::unique_ptr<Demon>(new Demon());
        std::unique_ptr<Troops> m_troops = std::unique_ptr<Troops>(new Troops());

        Council m_council;

        int Round = 0;
        bool isAuto;
        
    public:
        Game(bool isAuto);
        ~Game();
        void gameLoop();
};

#endif