/*
Write a function, GolfName, that is given an integer value for the number of strokes above or below par.  The function will return a string value for the golf name of that score.

Your function will return the following values depending on the number of strokes: 
   -2 - "EAGLE"
   -1 - "BIRDIE"
   0 - "PAR"
   1 - "BOGIE"
   2 - "DOUBLE BOGIE"
   3 - "TRIPLE BOGIE"
  otherwise, return "NO COMMENT"
Note: You must use a switch case for this problem. if/else statements are not allowed. 

Your function should be named GolfName
Your function takes one input parameter: an integer number
Your function has a return value: a string
Note1: Don't forget to include the appropriate library for using strings
Note2: You do not need to write the main(), the include, or namespace commands, you only need to write the function definition.
For example:

Test	Result
cout << GolfName(-2) <<endl;
EAGLE
cout << GolfName(2) <<endl;
DOUBLE BOGIE

*/


#include <iostream>

using namespace std;

string GolfName(int strokes)
{
    switch(strokes)
    {
        case -2:
            return "EAGLE";
            break;

        case -1:
            return "BIRDIE";
            break;
        case 0:
            return "PAR";
            break;
        case 1:
            return "BOGIE";
            break;
        case 2:
            return "DOUBLE BOGIE";
            break;
        case 3:
            return "TRIPLE BOGIE";
            break;
        default:
            return "NO COMMENT";
            break;
       
    }
}