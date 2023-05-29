#include "include/council.hpp"

#include <ctime>
#include <cstdlib>

Council::Council()
{
    srand(unsigned(time(0)));
    srand(unsigned(rand()));

    setGold(100 + rand()%890);
}

Council::~Council()
{
    
}