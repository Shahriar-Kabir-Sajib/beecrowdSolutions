#include <bits/stdc++.h>
using namespace std;

int main()
{
    double M[12][12], sum, avg;
    int i, j, L;
    cin >> L;
    char T;
    cin >> T;

    // Taking input
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> M[i][j];
        }
    }

    if (T == 'S')
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == L)
                {
                    sum = sum + M[i][j];
                }
            }
        }
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (T == 'M')
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == L)
                {
                    sum = sum + M[i][j];
                }
            }
        }
        avg = sum / (double)12;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
