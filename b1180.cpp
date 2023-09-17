#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int x[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int min = x[0];
    for (i = 1; i < n; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }

    cout << "Menor valor: " << min << endl;
    
    for (i = 0; i < n; i++)
    {
        if (min == x[i])
        {
            break;
        }
    }

    cout << "Posicao: " << i << endl;

    return 0;
}