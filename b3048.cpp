#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int A[num],flag=0;
    for (int i = 0; i < num; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (A[i]!=A[i+1])
        {
            flag++;
        }        
    }
    cout<<flag<<endl; 
}