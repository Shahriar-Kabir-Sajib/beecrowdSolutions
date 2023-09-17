#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double a[100];
    // taking input
    for (i = 0; i < 100; i++)
    {
        cin >> a[i];
    }

    // printing output
    for (i = 0; i < 100; i++)
    {
        if (a[i] <= 10)
        {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << a[i] << endl;
        }
    }

    return 0;
}