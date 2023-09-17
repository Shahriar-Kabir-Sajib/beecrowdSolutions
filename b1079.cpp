#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[3],avg;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[j];
        }
        avg = (a[0]*2+a[1]*3+a[2]*5)/10;
        cout<<fixed<<setprecision(1)<<avg<<endl;
        avg = 0;
    }    
}