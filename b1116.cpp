#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        double a,b;
        cin>>a>>b;
        if(b==0){
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            double div = a/b;
            cout<<fixed<<setprecision(1)<<div<<endl;
        }        
    }
    
    
 
    return 0;
}