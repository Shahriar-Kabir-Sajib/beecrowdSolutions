#include<iostream>
using namespace std;

int main()
{
    int i,j,a=7;
    for (int  i = 1; i < 10; i=i+2)
    {
        for (int  j = a; j>a-3; j--)
        {
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        a=a+2;
    }
    
    return 0 ;
}