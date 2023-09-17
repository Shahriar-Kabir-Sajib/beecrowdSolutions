#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, age = 0, count = 0;
    cin >> a;
    while (a > 0)
    {
        count++;
        age = a + age;
        cin >> a;
    }
    // avg
    double avg;
    avg = (double)age / count;
    cout << fixed << setprecision(2) << avg << endl;

    return 0;
}