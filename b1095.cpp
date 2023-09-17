#include <iostream>

using namespace std;

int main()
{
    int i=1, j;
    for (j = 60; j>-1; j=j-5)
    {
        cout << "I=" << i << " J=" << j << endl;
        i=i+3;
    }

    return 0;
}