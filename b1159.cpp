#include <iostream>
using namespace std;
int main()
{
    int a, i;
    cin >> a;
    int sum = 0;
    while (a != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (a % 2 != 0)
            {
                a = a + 1;
            }
            sum = a + sum;
            a = a + 2;
        }

        cout << sum << endl;
        sum = 0;
        cin >> a;
    }

    return 0;
}