// Print the numbers between 100 to 200 which are completely divisible by 3 and 5.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Numbers between 100 to 200 which are completely divisible by 3 and 5: \n");
    for (int i = 100; i <= 200; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}