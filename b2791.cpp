#include <iostream>
using namespace std;

int main()
{
    int A[4], flag = 1;
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (A[i] != 1)
        {
            flag++;
        }
        else
        {
            break;
        }
    }

    cout << flag << endl;
}