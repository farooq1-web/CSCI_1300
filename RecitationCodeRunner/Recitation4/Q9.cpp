/*
There are several errors in the following code. Find and fix them. '
Run the code as you fix them to see how Coderunner informs you of these errors.

*/

/*
//Program to find the product of all even numbers from 1 to N.
#include <iostream>
using namespace std;

//function prototype
//This needs a semicolon and the function type
isEven(int num)

int main() {
    int n;
    int product = 1;

    cout << "Enter a positive integer (n): " << endl;
    cin >> n;

    for (int i = 1; i <= n; i--) {
        if (isEven(i)) {
            product *= i;
        }
    }

    cout << "The product of even numbers between 1 and " << n << " is: " << product << endl;

    return 0;
}

// Define the isEven function here
//The the parameter should have an variable type
bool isEven(num) {
    if (num % 2 == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

*/


//Program to find the product of all even numbers from 1 to N.
#include <iostream>
using namespace std;

//function prototype
bool isEven(int num);

int main() {
    int n;
    int product = 1;

    cout << "Enter a positive integer (n): " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isEven(i)) {
            product *= i;
        }
    }

    cout << "The product of even numbers between 1 and " << n << " is: " << product << endl;

    return 0;
}

// Define the isEven function here
bool isEven(int num) {
    if (num % 2 == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}
