#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a, n, sum = 0;
    cin >> a >> n;
    while (n < 1)
    {
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a + i;
    }
    cout << sum << endl;

    return 0;
}