#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n, sum;
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;

        if (i == n - 3)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum << " ";
        }
    }

    return 0;
}