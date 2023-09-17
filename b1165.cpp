#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                count=1;
                break;
            }
        }
        if (count == 0)
        {
            cout << num << " eh primo" << endl;
        }
        else
        {
            cout << num << " nao eh primo" << endl;
        }
        count=0;
    }

    return 0;
}