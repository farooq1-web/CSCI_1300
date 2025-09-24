//Loops and loop tracing

/*
While loops: Checking a condition repeatedly until true and running the code inside if true
while(condition)
{
//code goes here
}
*/

//example program that has a user guess the password 
#include <iostream>
using namespace std;

void password()
{
    int attempts = 0; //initalize the number of attempts to guess the password
    string password = "GoBuffs";
    string guess;

    while (attempts<3 && guess != password) //Will iterate as long as both conditions are true
    {
    cout<<"type your password"<<endl;
    cin>>guess; //Store new guess
    attempts++; //Increment number of attempts
    }
    if(attempts == 3)
    {
        cout<<"you have ran out of attempts"<<endl;
    }
    else
    {
        cout<<"your password is "<<guess<<endl;
    }
}

void sum();

int main()
{
    password();
    sum();
}

//Write a program that asks a user to enter a number and sum the numbers. the user should than enter a 0 to quit the loop. then print the sum
void sum()
{
    bool cont = true;
    int userNum;
    int total;

    while(cont)
    {
        cout<<"enter a number: "<<endl;
        cin>>userNum;
        if(userNum != 0)
        {
        total = total + userNum;
        }
        else
        {
            cont = false;
        }
    }
   
}