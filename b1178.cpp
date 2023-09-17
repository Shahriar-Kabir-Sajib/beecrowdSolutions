#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N[100];
    double x;
    cin>>x;
    for (int i = 0; i < 100; i++)
    {
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<x<<endl;
        x=x/2;
    }
    return 0;
}