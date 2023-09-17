#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    cin >> M;

    int initial = N;
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if (s == "fechou")
        {
            initial++;
        }
        else if (s == "clicou")
        {
            initial--;
        }
    }
    cout << initial << endl;

    return 0;
}