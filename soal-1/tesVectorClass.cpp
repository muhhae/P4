#include <iostream>
#include <vector>

using namespace std;

class Num
{
    private:
        int n;
    public:
        Num(int n)
        {
            this->n = n;
        }
        ~Num()
        {
            cout<<"Num "<<n<<" is destroyed"<<endl;
        }
        void print()
        {
            cout<<"Num : "<<n<<endl;
        }
        void setNum(int a)
        {
            n = a;
        }
};



int main()
{
    vector<Num> tes;

    tes.push_back(Num(1));

    tes[0].setNum(4);
    tes[0].print();

    tes[0] = Num(3);

    tes[0].print();
    return 0;
}