#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    double a,n;
    cin>>a;
    while (a<0 || 10<a)
    {
        cout<<"nota invalida"<<endl;
        cin>>a;
    }
    cin>>n;
    while (n<0 || 10<n)
    {
        cout<<"nota invalida"<<endl;
        cin>>n;
    }
    double avg= (a+n)/2;
    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
 
    return 0;
}