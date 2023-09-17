#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int N[1000], j = 0;
    for (int i = 0; i < 1000; i = i + 1)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if (j > t - 1)
        {
            j = 0;
        }
    }

    return 0;
}