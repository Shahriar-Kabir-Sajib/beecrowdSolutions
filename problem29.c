// Write a program to print the following output using loop.
// *
// **
// ***
// ****
// *****

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}