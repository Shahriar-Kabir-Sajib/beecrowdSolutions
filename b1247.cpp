#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    // Initialisation
    int d, vf, vg;
    while (cin >> d >> vf >> vg)
    {
        double dis1 = 12; // distance will pass theif
        double dis2;      // distance will pass coast
        double t1, t2;

        dis1 = dis1;
        dis2 = sqrt(d * d + dis1 * dis1);

        t1 = dis1 / (double)vf;
        t2 = dis2 / (double)vg;

        // Dhorte hole coast er shomoy kom lagte hobe age powcate

        if (t1 >= t2)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}