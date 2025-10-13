//An algoithm is just like a recipe

//With arrays you hav et

//Linear search searches through an array one element at a time from left to right
//Binary search first needs to be ordered, than the code splits the array and sees does the number live above or below this point

#include <iostream>
using namespace std;

int main()
{
    /*This can be used to swap 2 numbers
    have to create a temp as removing the value
    means deleting it from the memory and so to perserve it, must be saved into another slot
    and than the sawpping can occur so no values are actually lost

    */

    const int intSIZE = 5;
    int array[5] = {10,4,19,34,56};

    int temp = array[0];
    array[0] = array[4];
    array[4] = temp;
    
}
/*
int random[10] = {99,3,9,5,7,4,11,13,4,0}

//the starting point is inclusive, the ending point is exclusive, meaning the code will stop right before the size
sort(random+1, random+size -2)
//This code would sort starting from 3 and ending at 13

*/