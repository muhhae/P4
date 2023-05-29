#include <iostream>

using namespace std;

class Parent 
{
    private :
        int x ,y;
    public :
        Parent()
        {
            setx(10); sety(20);
        }
        ~Parent()
        {

        }
        int getx(){return x;}
        int gety(){return y;}
        void setx(int x){this->x = x;}
        void sety(int y){this->y = y;}
};

class Child : public Parent
{
    public :
        Child()
        {
            setx(1); sety(2);
        }
};

int main()
{
    Child tes;

    cout<<"x : "<<tes.getx()<<" y : "<<tes.gety();


    return 0;
}