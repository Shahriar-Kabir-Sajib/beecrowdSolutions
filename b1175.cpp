#include <iostream>
using namespace std;
int main()
{
    int n[20], m[20], i, j;

    // taking input
    for (i = 0; i < 20; i++)
    {
        cin >> n[i];
    }
    // changing place
    for (j = 0, i = 19; j < 20; j++, i--)
    {
        m[j] = n[i];
    }

    // printing output
    for (j = 0; j < 20; j++)
    {
        cout << "N[" << j << "] = " << m[j] << endl;
    }

    return 0;
}