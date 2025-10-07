/*
There are several errors in the following code. Find and fix them. 
Run the code as you fix them to see how Coderunner informs you of these errors.
*/

/*
//Program to find the sum of even numbers from 1 to N
#include <iostream>
using namespace std;

int evenSum(int num)
{
    int sum = 0;
    int i = 1;

    while (i <= num) {
        if (i % 2 == 0) {
            //We have to increment i by 1
            sum = i;
        }
    //have to increment by 1 outside to ensure their is no runtime error

    }   
    
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer (n): " << endl;
    cin >> n;

    int result = evenSum(n);
    cout << "The sum of even numbers from 1 to " << n << " is: " << result << endl;

    return 0;
}

*/

//Program to find the sum of even numbers from 1 to N
#include <iostream>
using namespace std;

int evenSum(int num)
{
    int sum = 0;
    int i = 1;

    while (i <= num) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;

    }   
    
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer (n): " << endl;
    cin >> n;

    int result = evenSum(n);
    cout << "The sum of even numbers from 1 to " << n << " is: " << result << endl;

    return 0;
}



