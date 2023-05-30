#include <iostream>
#include <random>

int main()
{
    using namespace std;

    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution _rand(0, INT_MAX);

    cout<<_rand(rng)<<endl;

    int n = _rand(rng);

    cout<<n<<endl;
}
