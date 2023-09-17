#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        int a,b;
        cin>>a>>b;
        int mul = a*b;
        sum = sum+mul;
        
    }
    cout<<sum<<endl;
    
}