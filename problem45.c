// Say you are given the following array of integer datatypes-
// [-99,45,100,37,89,-327,245] .... Now write a program which
// will find the biggest integer and print the integer with its index... 

#include <stdio.h>
int main()
{
    int arr[] = {-99, 45, 100, 37, 89, -327, 245};
    int max = arr[0], i, index = 0;
    for (i = 0; i < 14; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (i = 0; i < 14; i++)
    {
        if (max == arr[i])
        {
            break;
        }
        else
        {
            index++;
        }
    }

    printf("max = %d\n", max);
    printf("index = %d", index);

    return 0;
}