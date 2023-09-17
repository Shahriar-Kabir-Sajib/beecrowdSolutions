#include <iostream>
 
using namespace std;
 
int main() {
    int x,z;
    cin>>x;
    cin>>z;
    while (z<=x)
    {
        cin>>z;
    }
    int count = 0;
    int sum= 0;
    for (int i = x; i < z; i++)
    {
        sum = sum+i;
        count++;
        if (sum>z)
        {
            break;
        }        
    }   
    cout<<count<<endl;
    
    return 0;
}