#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n < 1 || n > 5)
    {
        cout << "Enter again:";
        cin >> n;
    }

    float price, totalPrice = 0;
    for (int i = 0; i < n; i++)
    {
        int productNum;
        cin >> productNum;

        while (productNum < 1001 || productNum > 1005)
        {
            cout << "Enter Product Number again:";
            cin >> productNum;
        }

        int quantity;
        cin >> quantity;
        if (productNum == 1001)
        {
            price = quantity * 1.5;
        }
        else if (productNum == 1002)
        {
            price = quantity * 2.5;
        }
        else if (productNum == 1003)
        {
            price = quantity * 3.5;
        }
        else if (productNum == 1004)
        {
            price = quantity * 4.5;
        }
        else if (productNum == 1005)
        {
            price = quantity * 5.5;
        }
        totalPrice = totalPrice + price;
    }

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}