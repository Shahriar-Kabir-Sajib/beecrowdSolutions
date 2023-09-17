#include <iostream>
using namespace std;

int main()
{
    int h1, h2;
    int m1, m2;
    int h, m;
    int s1, s2, s;

    cin >> h1 >> m1;
    cin >> h2 >> m2;
    if (h1 < h2 ||((h1 == h2) && (m1 < m2)))
    {
        s1 = h1 * 3600 + m1 * 60;
        s2 = h2 * 3600 + m2 * 60;
        s = s2 - s1;

        h = s / 3600;
        s = s % 3600;
        m = s / 60;
    }
    else if (h1 > h2 || ((h1 == h2) && (m1 > m2)))
    {
        s1 = h1 * 3600 + m1 * 60;
        s2 = h2 * 3600 + m2 * 60;
        s = (86400 - s1) + s2;

        h = s / 3600;
        s = s % 3600;
        m = s / 60;
    }
    
    else if ((h1 == h2) && (m1 == m2))
    {
        h = 24;
        m = 0;
    }

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}
