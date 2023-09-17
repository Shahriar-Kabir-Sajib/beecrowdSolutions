#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    while (0 < a && 0 < b)
    {
        if (a < b)
        {
            for (int i = a; i <= b; i++)
            {
                sum = sum + i;
                cout << i << " ";
            }
            cout << "Sum=" << sum << endl;
        }
        else if (b < a)
        {
            for (int i = b; i <= a; i++)
            {
                sum = sum + i;
                cout << i << " ";
            }
            cout << "Sum=" << sum << endl;
        }
        sum = 0;
        cin>>a>>b;
    }

    return 0;
}