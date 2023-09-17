#include <iostream>
using namespace std;
int main()
{
    int x, m, E;
    cin >> x >> m;
    while (x != 0 && m != 0)
    {
        E = x * m;
        cout << E << endl;
        cin >> x >> m;
    }

    return 0;
}