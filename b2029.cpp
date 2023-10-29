#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.14;
    double volumn, diameter, radius, height, area;
    while (cin >> volumn >> diameter)
    {
        // cylinder's volume is π r² h
        radius = diameter / (double)2;
        // Measuring Height
        height = volumn / (pi * radius * radius);
        cout << fixed << setprecision(2) << "ALTURA = " << height << endl;
        // Measuring Area
        area = pi * radius * radius;
        cout << fixed << setprecision(2) << "AREA = " << area << endl;
    }

    return 0;
}