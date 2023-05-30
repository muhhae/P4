#include "include/game.hpp"

using namespace std;

int main()
{
    srand(time(NULL));
    while(1)
    {
        char in = 0;
        cout<<"\nAuto ? y/n"<<endl;
        while (1)
        {
            in = getch();
            if (in == 'n' || in == 'y') break;
        }

        Game m_game(in == 'y'); 

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