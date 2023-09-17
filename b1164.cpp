#include <iostream>
using namespace std;
int main()
{
    int a, n, i, j, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        for (j = 1; j < a; j++)
        {
            sum = sum + j;
            if (sum == a)
            {
                break;
            }
        }
        if (sum == a)
        {
            cout << a << " eh perfeito" << endl;
        }
        else
        {
            cout << a << " nao eh perfeito" << endl;
        }
        sum = 0;
    }

    return 0;
}