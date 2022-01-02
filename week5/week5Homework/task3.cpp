#include <iostream>
#include <string.h>
using namespace std;

double areaCircle(double radius)
{
    double area;
    area = radius * radius * 3.14;
    return area;
}
int main()
{

    double radius;
    cout << "radius = ";
    cin >> radius;
    cout << "The area is " << areaCircle(radius);
}