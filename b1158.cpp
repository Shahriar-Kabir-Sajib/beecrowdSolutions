#include <iostream>
using namespace std;
int main()
{
    int a, b, n, i, j, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a % 2 == 0)
        {
            a = a + 1;
        }
        for (j = 0; j < b; j++)
        {
            sum = a + sum;
            a = a + 2;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}