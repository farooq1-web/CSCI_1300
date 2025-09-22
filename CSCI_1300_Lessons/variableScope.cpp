#include <iostream>
using namespace std;
//Declaring a variable means assigning label to memory location

/*Variable Scope - describes where out variable can be seen in the code
local scope - variable can be used in the code block {} usually on the function level
global scope - variable visible everywhere
*/

//global variables can be problematic as two variables with the same name can have two different scopes
//This is a global variable accessible to all functions
int num = 10;

//function prototypes
double cube_Volume(double side_length);

void updateVariable(int& var);



//side length and cube_volume are local variables to this function
double cube_Volume(double side_length)
{
    double cube_volume = side_length;
    int length = 5;
    if(side_length > 0)
    {
        //This is a local variable to this conditional
        length = 10;
        cout<<length<<endl;
    }
    //This will print 5, not 10 as 10 is local to the conditional
    cout<<length<<endl;
    
}

void updateVariable(int& var) //& means address of
{
    var = 25; //var has the same memory location
    
}

int memory_location()
{
    int side_len=10; //local to main, has memory location

    /*
    Cannot input 10 as this is an r-value or temporary value
    but it can input a variable = 10 as this as memory location
    */
    updateVariable(side_len); //adress of side_len is passes to a function
    return 0;
}

//EXAMPLES -----------------------------------------------------------------------------------------------------------
//Write two functions to swap two numbers, use pass by value and for the other use pass by reference

//any changes made to to this function are destroyed
void change(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
    

}
int main()
{
    int a = 5;
    int b = 6;
    swap(a,b);
    //afer swap, a=6, b=5
}
//Examples
//Example of pass by value
/*
a copy of the variable is passed to the function
changes made do not affect the original variable
the copy lives in a seperate memory location
use case is when you want to protect the original data from being changed
*/
void modify(int x)
{
    x = x+10;
}

void modifyCall()
{
    int a = 5; 
    modify (a); //a is still 5, referencing x but x is destroyed in the function 
}
//Example of pass by reference
/*
The function recieves a reference to the original variable
Changes made inside the function do affect the original variable
no new copy is made, both refer to the same memory location
use case is when you want to modify the original variable
*/
void swap(int& x) //X is a reference to the original variable
{
    x = x + 10;
}

void swapCall()
{
    int a = 5; 
    swap(a); //a is now 15
}