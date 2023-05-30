#include "include/game.hpp"

using namespace std;

Game::Game(bool isAuto)
{
    this->isAuto = isAuto;
    gameLoop();
}

Game::~Game()
{

}

void Game::gameLoop()
{
    int troop[5] = {0, 0, 0, 0, 0};
    while(1)
    {
        int input = 0;

        Round++;

        if (Round == 1 || m_troops->getHp() <= 0)
        {
            while(1)
            {
                system("cls");

                cout<<"Demon Invasion Simulator\n\nGold : "<<m_council.getGold()<<endl;

                cout<<"\nChoose Troop To Deploy\n"<<endl;
                cout<<"1. Knight - 2 Gold"<<endl;
                cout<<"2. Archer - 5 Gold"<<endl;
                cout<<"3. Berserker - 20 Gold"<<endl;
                cout<<"4. Mage - 20 Gold"<<endl;
                cout<<"5. Golem - 20 Gold\n"<<endl;
                
                if (isAuto) input = 1 + rand() % 5;
                else input = getch() - '0';

                switch (input)
                {
                    case 1:
                        m_troops = unique_ptr<Troops>(new Knight());
                        troop[0]++;
                        break;
                    case 2:
                        m_troops = unique_ptr<Troops>(new Archer());
                        troop[1]++;
                        break;
                    case 3:
                        m_troops = unique_ptr<Troops>(new Berserker());
                        troop[2]++;
                        break;
                    case 4:
                        m_troops = unique_ptr<Troops>(new Mage());
                        troop[3]++;
                        break;
                    case 5:
                        m_troops = unique_ptr<Troops>(new Golem());
                        troop[4]++;
                        break;
                    default:
                        continue;
                        break;
                }

                if (m_council.getGold() >= m_troops->getPrice())
                {
                    cout<<"Council choose "<<m_troops->getName()<<" to deploy\n"<<endl;
                    cout<<"\nPress Any to Continue"<<endl;
                    cout<<"Press q to exit the simulator"<<endl;

                    char q = getch();
                    
                    if (q == 'q') return;
                    
                    m_council.setGold(m_council.getGold() - m_troops->getPrice());
                    cout<<"\nYou have "<<m_council.getGold()<<" Gold left"<<endl;
                    break;
                }
            }
        }

        system("cls");
        cout<<"Demon Invasion Simulator\n\nRound "<<Round<<endl;
        
        cout<<"\nYour Troop"<<endl;
        
        m_troops->print();

        m_troops->Attack(m_demon.get());
        m_troops->Defense(m_demon->getAtk());

        cout<<"\n"<<m_troops->getName()<<" Attacking The Demon\n"<<"\nBattle Result"<<endl;

        m_troops->print();

        if(m_troops->getHp() <= 0 && m_council.getGold() < 2) 
        {
            cout<<"\nAll your troops have been slain, With no gold left, Council has decided to surrender.\nYou lost with "<<troop[0]<<" Knight "<<troop[1]<<" Archer "<<troop[2]<<" Berserker "<<troop[3]<<" Mage "<<troop[4]<<" Golem"<<endl;
            break;
        }
        if(m_demon->getHp() <= 0)
        {
            cout<<"\nYour troop the "<<m_troops->getName()<<" Has Slain the Demon.\nYou win with "<<troop[0]<<" Knight "<<troop[1]<<" Archer "<<troop[2]<<" Berserker "<<troop[3]<<" Mage "<<troop[4]<<" Golem and "<<m_council.getGold()<<" Gold left\n"<<endl;
            break;
        } 

        if (m_troops->getHp() <= 0) cout<<"\nYour troop has died. You can choose troop to deploy again"<<endl;
        else cout<<"\nYour troop survived the battle. Your troop will fight again on the next round "<<endl;
        cout<<"\nPress Any to Continue"<<endl;
        getch();
        
    }
}

