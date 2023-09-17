#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    char c[n];

    //taking input
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>c[i];
    }

    //sum of the animals
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+a[i];
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    //sum of the rabbits
    int sum_r = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i]=='C')
        {
            sum_r = sum_r+a[i];
        }
        
    }
    cout<<"Total de coelhos: "<<sum_r<<endl;
    //sum of the rats
    int sum_rat = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i]=='R')
        {
            sum_rat = sum_rat+a[i];
        }
        
    }
    cout<<"Total de ratos: "<<sum_rat<<endl;

    //sum of the frogs
    int sum_f = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i]=='S')
        {
            sum_f = sum_f+a[i];
        }
        
    }
    cout<<"Total de sapos: "<<sum_f<<endl;

    //printing average   
    double avg_r = (double)sum_r*100/sum;
    double avg_rat = (double)sum_rat*100/sum;
    double avg_f = (double)sum_f*100/sum;

    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<avg_r<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<avg_rat<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<avg_f<<" %"<<endl;

    return 0;
}