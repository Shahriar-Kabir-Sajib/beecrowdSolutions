#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            if (a % 2 == 0)
            {
                a = a + 1;
                for (int j = a; j < b; j = j + 2)
                {
                    sum = sum + j;
                }
            }
            else
            {
                a = a + 2;
                for (int j = a; j < b; j = j + 2)
                {
                    sum = sum + j;
                }
            }

            cout << sum << endl;
        }
        else if (b < a)
        {
            if (b % 2 == 0)
            {
                b = b + 1;
                for (int j = b; j < a; j = j + 2)
                {
                    sum = sum + j;
                }
            }
            else
            {
                b = b + 2;
                for (int j = b; j < a; j = j + 2)
                {
                    sum = sum + j;
                }
            }

            cout << sum << endl;
        }
        else
        {
            sum = 0;
            cout << sum << endl;
        }
        
        sum =0;
    }

    return 0;
}