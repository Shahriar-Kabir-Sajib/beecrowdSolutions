#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if (num==0)
    {
        cout<<"E"<<endl;
    }
    else if (1<=num && num<=35)
    {
        cout<<"D"<<endl;
    }
    else if (36<=num && num<=60)
    {
        cout<<"C"<<endl;
    }
    else if (61<=num && num<=85)
    {
        cout<<"B"<<endl;
    }
    else if (86<=num && num<=100)
    {
        cout<<"A"<<endl;
    }
    
}