// Write a program to print the following output using loop-
// *
// Blank Line
// ***
// Blank Line
// *****
// Blank Line
// *******

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + 1) % 2 == 0)
            {
                printf("Blank Line");
                break;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}