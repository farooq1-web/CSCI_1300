/*
There are several errors in the following code. 
Find and fix them. Run the code as you fix them to see how Coderunner informs you of these errors.
*/




/*
//Program to find the total count of Uppercase letters in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int uppercaseCount = 0;

    cout << "Enter a string: " << endl;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        //input need [i] as this will check the index of the string and than convert it to an int value 
        if (int(input) >= 65 || int(input) <= 90)) {
            //This needs to be incremented by 1  
            uppercaseCount = 1;
        }
    }

    cout << "The number of uppercase letters in the string is: " << uppercaseCount << endl;

    return 0;
}
*/

//Program to find the total count of Uppercase letters in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int uppercaseCount = 0;

    cout << "Enter a string: " << endl;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (int(input[i]) >= 65 && int(input[i]) <= 90) {
            uppercaseCount++;
        }
    }

    cout << "The number of uppercase letters in the string is: " << uppercaseCount << endl;

    return 0;
}