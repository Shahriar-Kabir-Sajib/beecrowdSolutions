#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int r1[num], r2[num];
    for (int i = 0; i < num; i++)
    {
        cin>>r1[i]>>r2[i];       
    }
    for (int i = 0; i < num; i++)
    {
        cout<<r1[i]+r2[i]<<endl;
    }   
}