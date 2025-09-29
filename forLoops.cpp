#include <iostream>

using namespace std;


/*
For loops have this structure
for(initial value; condition; change)
{
//code goes here
}
*/
string convertString(string text);
void forLoop();
void drawLines(string str);

int main()
{
    forLoop();
    cout<<"provide a string for the function convertString"<<endl;
    convertString("YayItsFriday");
    drawLines("Hello");
}

void forLoop()
{
    /*
    A new local variable is created x, in the loop
    The loop condition is x<10. Loop will continue to repeat while true
    x++ changes each time the loop execute
    */
    for(int x=0; x<10; x++)
    {
        cout<< x<<endl;
    }

    //Loops through the string and adds a space between each letter
    string name = "Ralphie";
    for(unsigned int i = 0; i<name.length(); i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
}


//Example 1
//A function that takes a string as an argument 
//and converts every third letter starting at the second letter to the letter before it 
string convertString(string str)
{
    cout<<"input a text ";
    cin>>str;
    //Use unsigned if you know values are not negative
    //Instead of a range of negative numbers, the range will double for positive numbers
    for(unsigned int i = 0; i<str.length()-1; i++)
    {
        if(i%3 == 0)
        {
            str[i+1] = str[i];  
        }
        cout<<str[i];
    }
    cout<<endl;
    return str;
}

//Example 2
//write a function that takes a string as an argument and draws a line above and below the string. function can be void type
void drawLines(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout<<"-";
    }
    cout<<endl<<str<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout<<"-";
    }
    cout<<endl;

}
