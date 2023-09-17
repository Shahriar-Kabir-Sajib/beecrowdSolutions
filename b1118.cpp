#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a;
    while (a < 0 || 10 < a)
    {
        cout << "nota invalida" << endl;
        cin >> a;
    }
    cin >> b;
    while (b < 0 || 10 < b)
    {
        cout << "nota invalida" << endl;
        cin >> b;
    }

    
    int x;
    double avg;
    while (true)
    {
        avg = (a + b) / 2;
        cout << fixed << setprecision(2) << "media = " << avg << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;

        cin >> x;
        while (x < 1 || 2 < x)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }
        if(x==2){
            break;
        }

        cin >> a;
        while (a < 0 || 10 < a)
        {
            cout << "nota invalida" << endl;
            cin >> a;
        }
        cin >> b;
        while (b < 0 || 10 < b)
        {
            cout << "nota invalida" << endl;
            cin >> b;
        }
        avg = 0;        
    }

    return 0;
}