#include <bits/stdc++.h>
using namespace std;
int main()
{
    float taka;
    int note;
    cin >> taka;
    taka = taka*100;

    cout << "NOTAS:" << endl;

    note = taka / 10000;
    taka = taka - note * 10000;
    cout << note << " nota(s) de R$ 100.00" << endl;

    note = taka / 5000;
    taka = taka - note * 5000;
    cout << note << " nota(s) de R$ 50.00" << endl;

    note = taka / 2000;
    taka = taka - note * 2000;
    cout << note << " nota(s) de R$ 20.00" << endl;

    note = taka / 1000;
    taka = taka - note * 1000;
    cout << note << " nota(s) de R$ 10.00" << endl;

    note = taka / 500;
    taka = taka - note * 500;
    cout << note << " nota(s) de R$ 5.00" << endl;

    note = taka / 200;
    taka = taka - note * 200;
    cout << note << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    note = taka / 100;
    taka = taka - note * 100;
    cout << note << " moeda(s) de R$ 1.00" << endl;

    note = taka / 50;
    taka = taka - note * 50;
    cout << note << " moeda(s) de R$ 0.50" << endl;

    note = taka / 25;
    taka = taka - note * 25;
    cout << note << " moeda(s) de R$ 0.25" << endl;

    note = taka / 10;
    taka = taka - note * 10;
    cout << note << " moeda(s) de R$ 0.10" << endl;

    note = taka / 5;
    taka = taka - note * 5;
    cout << note << " moeda(s) de R$ 0.05" << endl;

    note = taka / 1;
    cout << note << " moeda(s) de R$ 0.01" << endl;

    return 0;
}