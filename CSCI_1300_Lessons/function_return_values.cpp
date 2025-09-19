/*
Learning about different function types
and creating a project that finds the time it will take for delivery
given distance and method (speed)
*/

#include<iostream> 
using namespace std; 

//function prototype, used for letting the program know about a specific function
double calculateDeliveryTime(double distance, char method); //Double return type


int main()
{
    //Get input from the user for distance and method
    double distance;
    char method;
    cout<<"Enter distance"<<endl;
    cin>>distance;
    cout<<"Enter delivery method"<<endl;
    cin>>method;
    //Calling the method and assinging its value to a variable
    double delivery_time = calculateDeliveryTime(distance, method); 
    cout<<"Delivery Time = "<< delivery_time <<"hours"<<endl;
    return 0;

}

//user defined function with two parameters
double calculateDeliveryTime(double distance, char method) //Double return type
{

    double deliveryTime = 0;
    //check for valid distance
    if(distance <=0)
    {
        return 0;
    }
    //checking if method is not one of valid methods
    if(method != 'E' && method != 'F' && method != 'G' && method != 'H')
    {
        return 0;
    }
    //Switch statement, similar to if statement but more simplified
    switch (method)
    {
        case 'E':
            deliveryTime = distance / 40;
            break;
        case 'F':
            deliveryTime = distance / 55;
            break;
        case 'G':
            deliveryTime = distance / 65;
            break;
        case 'H':
            deliveryTime = distance / 80;
    }

    return deliveryTime;
}

//The method or speed at which the delivery is happening
void method() //Void type does not store any values outside of the function, and doesn't return an actual value
{
    //E - 40 miles per hour
    //F - 55 miles per hour
    //G - 65 miles per hour
    //H - 80 miles per hour
}

//Functions returns a string type
string text(string word)
{
    word = "Program"; 
    return word;
}

//Function returns character type
char letter(char letter)
{
    letter = 'A'; 
    return letter;
}




