#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialization and Taking Input
    int col;
    cin >> col;
    char ch;
    cin >> ch;
    int i, j, count = 0;
    double M[12][12], sum = 0, avg;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }

    // Calculation
    for (i = 0, j = col; i < 12; i++)
    {
        sum = sum + M[i][j];
        count++;
    }

    // Outcome
    if (ch == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (ch == 'M')
    {
        avg = sum / (double)count;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}