//Programming technique where a function calls itself to solve a smaller version of the same problem

//Every recursive functions must have 
//Base case - when to stop, smallest instance of the problem
//recursive case - the step where the functions calls itself with smaller input

#include <iostream>
using namespace std;


void countdown(int n)
{
    if(n==0) //base case
    {
        cout<<"lift off"<<endl;
        return;
    }
    cout<< n <<endl;
    countdown(n-1); //recursive call with smaller input

}
int factorial(int n)
{
    if ( n==1) //base case
    {
        return 1;
    }
    return n* factorial (n-1); //recursive call
}

int main()
{
    countdown(5);
    factorial(4);
    //4 * factorial(3)
    //3*factorial(2)
    //2* factorial (1)
    //return 1
    /*
    2*1
    3*2
    4*6

    after getting to the last step, it backtracks and finishes the other function calls
    */
    return 0;

}

//The call stack: When a function is called (any function) it gets loaded into something called the call stack in memory
//recursion - creates multiple copies of the function on the stack, each with different arguments for the same parameter


/*

recursion vs iteration
some problems do have resursive structures - easier to solve with recursive function than loops
many problems that can be solved with for loops - can also be solved with recursion

With recursion always remember:
Base Case
base case never reached
making the recursive call not reduce the problem
doing uncessecary repeated work



*/

