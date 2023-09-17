#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t1, t2, n = 1, match = 0, inter = 0, gremio = 0, draw = 0;

    while (n == 1)
    {
        if (n == 1)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
        }
        match++;
        cin >> t1 >> t2;
        if (t1 > t2)
        {
            inter++;
        }
        else if (t1 < t2)
        {
            gremio++;
        }
        else
        {
            draw++;
        }

        cin >> n;
    }

    // result
    cout << match << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;

    if (inter > gremio)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (inter < gremio)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else if (inter == gremio)
    {
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}