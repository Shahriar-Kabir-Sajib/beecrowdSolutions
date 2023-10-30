#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Initialization of character
    char ch;
    cin >> ch;
    // Initialization of 2D Array
    int i, j;
    double M[12][12];
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    // Sum and avg
    double sum = 0, avg;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (j > 12 - 1 - i)
            {
                sum = sum + M[i][j];
            }
        }
    }
    // Printing sum
    if (ch == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    // Printing avg
    else if (ch == 'M')
    {
        avg = sum / (double)66;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}