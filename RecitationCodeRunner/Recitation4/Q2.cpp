/*


The surface area of a cylinder with radius r  and height h is given by the formula 2.0πr(r+h)
.

Write a function cylinderArea to calculate and return the surface area of a cylinder. The function takes two parameters of type double - the radius (r) and the height (h) of the cylinder. 


Function specifications: 

Function name: cylinderArea

Function parameters (in this order): radius (double), height (double)

Function return value: surface area (double) 

The function should not print anything.

Edge case: If at least one parameter is a negative number, the function should return -1

Note: Use M_PI from the cmath library. 
For example:

Test	Result
    double r = 5.9;
    double h = 2.6;
    double area = cylinderArea(r,h);
    cout<<area<<endl;
315.102
    double r = -3.4;
    double h = 2.5;
    double area = cylinderArea(r,h);
    cout<<area<<endl;
-1


*/


// Your function here

#include <iostream>
#include <cmath>

using namespace std;

double cylinderArea(double radius, double height)
{
    if(radius<0 || height <0)
    {
        return -1;
    }
    else
    {
        double surfaceArea = 2.0 * M_PI * radius * (radius + height);
        return surfaceArea;
    }
}
