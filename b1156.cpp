#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double b = 1, sum = 0;
    for (int i = 1; i <= 39; i = i + 2)
    {
        sum = sum + ((double)i / b);
        b = 2 * b;
    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}