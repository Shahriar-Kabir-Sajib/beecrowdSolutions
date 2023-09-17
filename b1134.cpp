#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int count_a = 0;
    int count_g = 0;
    int count_d = 0;

    while (n != 4)
    {
        while (n < 1 || 4 < n)
        {
            cin >> n;
        }
        if (n == 1)
        {
            count_a++;
        }
        else if (n == 2)
        {
            count_g++;
        }
        else if (n == 3)
        {
            count_d++;
        }
        cin >> n;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << count_a << endl;
    cout << "Gasolina: " << count_g << endl;
    cout << "Diesel: " << count_d << endl;

    return 0;
}