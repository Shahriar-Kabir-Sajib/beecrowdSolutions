#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        if (i < x)
        {
            cout << i << " ";
        }
        else if (i == x)
        {
            cout << i << endl;
            cin >> x;
            i=0;
        }
        
    }

    return 0;
}