#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << "Top 1" << endl;
    }
    else if (num == 2 || num == 3)
    {
        cout << "Top 3" << endl;
    }
    else if (num == 4 || num == 5)
    {
        cout << "Top 5" << endl;
    }
    else if (6 <= num && num <= 10)
    {
        cout << "Top 10" << endl;
    }
    else if (11 <= num && num <= 25)
    {
        cout << "Top 25" << endl;
    }
    else if (26 <= num && num <= 50)
    {
        cout << "Top 50" << endl;
    }
    else if (51 <= num && num <= 100)
    {
        cout << "Top 100" << endl;
    }
}