#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int d1, d2;
    int h1, h2;
    int m1, m2;
    int s1, s2;
    int d, h, m, s;
    string str;

    cin >> str >> d1;
    cin >> h1 >> str >> m1 >> str >> s1;
    cin >> str >> d2;
    cin >> h2 >> str >> m2 >> str >> s2;

    // For second
    if (s2 < s1)
    {
        s2 = s2 + 60;
        m2--;
    }
    s = s2 - s1;

    // For minute
    if (m2 < m1)
    {
        m2 = m2 + 60;
        h2--;
    }
    m = m2 - m1;

    // For hour
    if (h2 < h1)
    {
        h2 = h2 + 24;
        d2--;
    }
    h = h2 - h1;

    // For day
    d = d2 - d1;

    // printing output
    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;

    return 0;
}
