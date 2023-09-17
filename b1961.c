#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p, n;
    scanf("%d %d", &p, &n);
    int pipe[100];
    int count = 0;
    int a;

    if (1 <= p && p <= 5 && 2 <= n && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &pipe[i]);
            // while (pipe[i] < 1 || 10 < pipe[i])
            // {

            //     printf("Input again:");
            //     scanf("%d", a);
            // }
            // pipe[i] = a;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        a = pipe[i] - pipe[i + 1];
        a = abs(a);
        if (a > p)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    if (count == n-1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}