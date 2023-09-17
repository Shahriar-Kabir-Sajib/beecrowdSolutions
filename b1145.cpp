#include <iostream> 
using namespace std;
 
int main() 
{
    int a,b;
    cin>>a;
    while (2>a || a>20 )
    {
        cin>>a;
    }
    cin>>b;
    while (a>b || b>100000 )
    {
        cin>>b;
    }

    for (int i = 1; i <= b; i++)
    {
        cout<<i;
        if(i%a!=0)
        {
            cout<<" ";
        }
        else if (i%a==0)
        {
            cout<<endl;
        }
        
    }

    return 0;
}