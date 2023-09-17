#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    for (int i = 0; i < 10000; i++)
    {
        if (i%n==0)
        {
            cout<<i+2<<endl;
        }       
    }
    return 0;
}