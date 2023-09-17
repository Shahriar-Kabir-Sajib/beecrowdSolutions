#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    double M[12][12];
    int i, j;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }

    double s, m, sum = 0, avg;
    
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (i<j && i>12-j-1)
            {
                sum += M[i][j];
            }
            
        }
    }

    if (ch == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (ch == 'M')
    {

        avg = (double)sum / 144;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}