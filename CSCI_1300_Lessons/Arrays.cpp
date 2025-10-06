#include <iostream>
using namespace std;


void arrays();
int addFirstAndLast(int array[], int size);



int main()
{

    arrays();

    int values[5] = {34,23,12,5,6};
    cout<<addFirstAndLast(values,5)<<endl;
}

/*
-Arrays is a contiguous block of memory
-store sequence of variables of the same type
-Fixed size. Created at compile time
-Memeory allocated based on array size and data type
-arrat of int

int intArray[10] = {1,2,3,4,5,6,7,8,9,10};
10 is the number of elements in list and the list has been assigned the 10 numbers above

const int Size = 10 - const means the array of size cannot change
*/

void arrays()
{
    int numArray[5] = {1,2,3,4,5};
    cout<<numArray[0]<<endl;

    for(int i=0; i<5; i++)
    {
        
        cout<<numArray[i]<<endl;
    }

    int setArray[5];
    for(int i=0; i<5; i++)
    {
        setArray[i] = i;
        cout<<setArray[i]<<endl;
    }
    
    
    string str = "this is a string";
    cout<<str[4]; //prints first letter

}

void arrayExample()
{
    int values[99];
    values [98] = 100;

    int a[4] = {2,3,5,7};


}
//Arrays are passed as reference parameters
//arrays parameter types are automatically treated as pass by reference

//Write a function that adds the first and last elements in the array and returns that value

int addFirstAndLast(int array[], int size)
{
    //array[0] is the first element, array[size-1] or 4 is the last element
    return array[0] + array[size-1];
}