#include <iostream> 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int i,a=1;
    for (i = 1; i <= n; i++)
    {        
        cout<<a<<" "<<a+1<<" "<<a+2<<" PUM"<<endl;
        a=a+4;        
    }
    return 0;
}