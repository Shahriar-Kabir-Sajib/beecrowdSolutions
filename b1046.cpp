#include <iostream>
using namespace std;

int main()
{
    int a, b, net;
    cin >> a >> b;

    if (a > b)
    {
        net = (24 - a) + b;
    }
    else if (a < b)
    {
        net = b - a;
    }
    else
    {
        net=24;
    }

    cout << "O JOGO DUROU " << net << " HORA(S)" << endl;

    return 0;
}