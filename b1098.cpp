#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double i, j;
    double a = 0;
    for (i = 0; i <= 2; i = i + .2)
    {
        for (j = 1; j <= 3; j++)
        {
            if (i == 0 || i == 1 || i > 1.8)
            {
                cout << fixed << setprecision(0) << "I=" << i << " "
                     << "J=" << j+a << endl;
            }
            else
            {
                cout << fixed << setprecision(1) << "I=" << i << " "
                     << "J=" << j + a << endl;
            }
        }
        a = a + .2;
    }

    return 0;
}