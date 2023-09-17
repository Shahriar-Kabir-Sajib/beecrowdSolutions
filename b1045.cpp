#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num[3];
    int n = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);

    double a, b, c;
    a = num[2];
    b = num[1];
    c = num[0];
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // statements
    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if (a * a == b * b + c * c)
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (a * a > b * b + c * c)
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    else if (a * a < b * b + c * c)
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (a == b || b == c || c == a)
    {
        if (a != b || b != c || a != c)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
        else if (a == b && b == c && c == a)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
    }

    return 0;
}