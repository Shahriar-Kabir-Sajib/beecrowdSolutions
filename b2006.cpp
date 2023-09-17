#include<iostream>
using namespace std;

int main()
{
    int tea;
    cin>>tea;

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int flag = 0;
    if (tea == a)
    {
        flag++;
    }
    if (tea == b)
    {
        flag++;
    }if (tea == c)
    {
        flag++;
    }if (tea == d)
    {
        flag++;
    }if (tea == e)
    {
        flag++;
    }
    cout<<flag<<endl;
    

    return 0;
}