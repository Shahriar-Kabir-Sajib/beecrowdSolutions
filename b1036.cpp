#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double r1,r2;
    cin>>a>>b>>c;

    if (b*b-4*a*c<0 || a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
        r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
        cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;
    }

    return 0;
}