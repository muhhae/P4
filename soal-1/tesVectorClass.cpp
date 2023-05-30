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

void hapus(int i, vector<Num>* n)
{
    n->erase(n->begin()+i);
}

int main()
{
    vector<Num> tes;

    for (int i = 0; i < 5; i++) tes.push_back(Num(i));
    for (int i = 0; i < tes.size(); i++) tes[i].print();
    hapus(3, &tes);
    for (int i = 0; i < tes.size(); i++) tes[i].print();
    
    return 0;
}