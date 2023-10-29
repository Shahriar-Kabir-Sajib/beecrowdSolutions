#include <iostream>
using namespace std;
int main()
{
    int i, n, h, m, o;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> h >> m >> o;
        if (o == 1)
        {
            if (h < 10 && m < 10)
            {
                cout << "0" << h << ":"
                     << "0" << m << " - "
                     << "A porta abriu!" << endl;
            }
            else if (h < 10)
            {
                cout << "0" << h << ":" << m << " - "
                     << "A porta abriu!" << endl;
            }
            else if (m < 10)
            {
                cout << h << ":"
                     << "0" << m << " - "
                     << "A porta abriu!" << endl;
            }

            else
            {
                cout << h << ":" << m << " - "
                     << "A porta abriu!" << endl;
            }
        }
        else if (o == 0)
        {
            if (h < 10 && m < 10)
            {
                cout << "0" << h << ":"
                     << "0" << m << " - "
                     << "A porta fechou!" << endl;
            }

            else if (h < 10)
            {
                cout << "0" << h << ":" << m << " - "
                     << "A porta fechou!" << endl;
            }
            else if (m < 10)
            {
                cout << h << ":"
                     << "0" << m << " - "
                     << "A porta fechou!" << endl;
            }

            else
            {
                cout << h << ":" << m << " - "
                     << "A porta fechou!" << endl;
            }
        }
    }

    return 0;
}