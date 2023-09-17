#include <iostream>
using namespace std;

int main()
{
    int n[10];
    int a ;
    cin>>a;
    for (int i = 0; i < 10; i++)
    {
        cout<<"N["<<i<< "] = "<<a<<endl;
        a = 2*a;
    }
    

    return 0;
}