// Take four double variables x,y,z and avg. Assign values to x,y and z as you want.
// Now calculate the average of x,y and z and assign it to avg. Finally print the 
// average value like-
// Average of x,y and z is:--

#include <stdio.h>

double sum(double a, double b, double c)
{
    double sum = a + b + c;
    return sum;
}
double average(double s){
    double avg = s/(double)3;
    return avg;
}
int main()
{
    double x, y, z, avg;
    printf("Enter any 3 values you want: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    double s = sum(x, y, z);
    avg = average(s);

    printf("Average of x,y and z is: %.2lf\n",avg);

    return 0;
}