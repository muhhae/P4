#include "include/game.hpp"

using namespace std;

int main()
{
    while(1)
    {
        Game m_game; 
        cout<<"\nSimulation is over. Try Again y/n"<<endl;

        bool tryAgain;

        while(1)
        {
            char input = getch();

            tryAgain = (input == 'y');

            if (input == 'n' || input == 'y') break;
            else continue;
        }

        if (tryAgain) continue;
        else break;
    }
     

    return 0;
}