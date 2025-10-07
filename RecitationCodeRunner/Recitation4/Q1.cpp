/*

The surface area of a right circular cone with radius r  and slant height l is given by the formula πr(r+l)
.

Write a function coneArea to calculate and return the surface area of a cone. The function takes two parameters of type double - the radius (r) and the slant height (l) of the cylinder. 


Function specifications: 

Function name: coneArea

Function parameters (in this order): radius (double), slant height (double)

Function return value: surface area (double) 

The function should not print anything.

Edge case: If at least one parameter is a negative number, the function should return -1

Note: Use M_PI from the cmath library. 
For example:

Test	Result
    double r = 5.9;
    double l = 2.6;
    double area = coneArea(r,l);
    cout<<area<<endl;
157.551
    double r = -3.4;
    double l = 2.5;
    double area = coneArea(r,l);
    cout<<area<<endl;
-1

*/
// Your function here

#include <iostream>
#include <cmath>
using namespace std;
double coneArea(double radius, double slantHeight);


double coneArea(double radius, double slantHeight)
{
    if(radius<0 || slantHeight < 0)
    {
        return -1;
    }
    else
    {
        double SA = M_PI * radius *(radius + slantHeight);
        return SA;
    }
    
}