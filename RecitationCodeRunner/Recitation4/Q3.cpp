/*
The volume of a cylinder with radius r  and height h is given by the formula πr2h
.

Write a function cylinderVolume to calculate and return the volume of a cylinder. The function takes two parameters of type double - the radius (r) and the height (h) of the cylinder. 


Function specifications: 

Function name: cylinderVolume

Function parameters (in this order): radius (double), height (double)

Function return value: volume (double) 

The function should not print anything.

Edge case: If at least one parameter is a negative number, the function should return -1

Note: Use M_PI from the cmath library. 
For example:

Test	Result
    double r = 5.9;
    double h = 2.6;
    double volume = cylinderVolume(r,h);
    cout<<volume<<endl;
284.333
    double r = -3.4;
    double h = 2.5;
    double volume = cylinderVolume(r,h);
    cout<<volume<<endl;
-1

*/


// Your function here

#include <iostream>
#include <cmath>

using namespace std;

double cylinderVolume(double radius, double height)
{
    if(radius <0 || height <0)
    {
        return -1;
    }
    else
    {
        double volume = M_PI * (radius * radius) * height;
        return volume;  
    }
    
}