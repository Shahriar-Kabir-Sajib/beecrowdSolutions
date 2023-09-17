#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int a, b, rem;
        cin >> a >> b;
        if (a > b)
        {          
            while (b != 0)
            {
                rem = a % b;
                a = b;
                b = rem;
            }
            cout << a << endl;
        }
        else
        {          
            while (a != 0)
            {
                rem = b % a;
                b = a;
                a = rem;
            }
            cout << b << endl;
        }
    }

    return 0;
}