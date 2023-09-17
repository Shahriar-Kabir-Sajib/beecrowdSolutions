#include <iostream>
using namespace std;
int main()
{
    string ch;
    cin >> ch;
    int n = ch.size();
    
    if (n < 10) cout<<"palavrinha"<<endl;
    else cout<<"palavrao"<<endl;

    return 0;
}