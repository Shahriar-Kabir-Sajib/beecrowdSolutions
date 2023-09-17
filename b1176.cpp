#include <iostream>
using namespace std;
int main()
{
    long long int arr[60];
    int i, t, n;
    cin >> t;

    int sum;
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < 61; i++)
    {
        arr[i] = arr[i-2]+arr[i-1];
    }

    for (i = 0; i < t; i++)
    {
        cin >> n;
        cout << "Fib(" << n << ") = " << arr[n] << endl;
    }

    return 0;
}