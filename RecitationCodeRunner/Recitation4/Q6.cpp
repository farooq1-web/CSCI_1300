/*

There are several errors in the following code. 
Find and fix them. Run the code as you fix them to see how Coderunner informs you of these errors.

*/


/*
//Program to print out 5 '^' characters each on a new line
#include <iostream>

using namespace std;

void justKeepLooping(char letter);

int main(){
    //This part needs two single quotation marks around the parameter as this is a character
    justKeepLooping(^);
    return 0;
}

void justKeepLooping(char letter){
    //prints out 5 ‘^’ characters each on a new line
    int i = 10;
    do{
        cout << letter << endl;
        //This should be -=2
        i += 2;
    //The while statement needs an semicolon. The way this loop works is the loop will run once hence the do, 
    //and than will check the conditional
    }while(i > 1)
    return;
}

*/










//Program to print out 5 '^' characters each on a new line
#include <iostream>

using namespace std;

void justKeepLooping(char letter);

int main(){
    justKeepLooping('^');
    return 0;
}

void justKeepLooping(char letter){
    //prints out 5 ‘^’ characters each on a new line
    int i = 10; 
    do
    {
        cout << letter << endl;
        i -= 2;
    }
    while(i > 1);
    return;
}



