#include <iostream>

using namespace std;

int main()
{

    int a[100], i;
    int n;
    for (i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }
    int max = a[1];
    for (i = 1; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            n = i;
        }
    }
    cout << max << endl;
    cout << n << endl;

    return 0;
}