#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    // taking input
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // changing value
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 1)
        {
            a[i] = 1;
        }
    }

    // printing output
    for (i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << a[i] << endl;
    }

    return 0;
}