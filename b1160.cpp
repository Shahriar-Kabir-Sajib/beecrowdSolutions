#include <iostream>
using namespace std;
int main()
{
    int i, j, t, pa, pb;
    double g1, g2;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> pa >> pb;
        cin >> g1 >> g2;

        for (j = 1; j <= 100; j++)
        {
            pa = (pa * g1 / 100) + pa;
            pb = (pb * g2 / 100) + pb;
            if (pa > pb)
            {
                cout << j << " anos." << endl;
                break;
            }
        }
        if (j > 100)
        {
            cout << "Mais de 1 seculo." << endl;
        }
    }

    return 0;
}