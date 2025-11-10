/*

Array Limitations:
Fixed size
acess data through index adding and removing requires shifting
need to keep track of allocated space
could allocate more memory than we need or run out of memory

Vectors:
C++ interface that handles memory allocation and sizing for you
container that holds any data type - int, string, double, object
add or remove elements from any index in the vector easily

#include<vector> //vector header file

//declare an empty vector
vector<int> v; //make a vector that can hold integers with variable name v

vector<double> v; //Make a vector that can hold double data type with name v

//declare a vector of size 5
vector<int> vs(5) //vector keyword, int type, v2 is the variable name, 5 is the size init to 0

//declare a vector with initial values
vector<int> v2 = {1,2,3,4} //same as above, just some initial values
//we can than use this to acess vector elements
cout<<V2[0]; //will print 1
cout<<V2[1]; will print out 2


v2.push_back(10);
//v2 now contains {1,2,3,4,10}
v2.push_back(11)
//v2 now contains {1,2,3,4,10,11}

v2.pop_back();
//v2 now contains {1,2,3}

//vector has a size method
for(int i = 0; i<v2.size(); x++)
{
    cout<<v2[x]<<endl;
}


//insert method that asks where to insert and begin method(begin is an iterator) is a pointer to the first element in the vector
//+2 says skip the first 2 and than insert the value 10
v2.insert(v2.begin() + 2, 10)
//V2 now contains 1,2,10,3,4


v2.erase(v2.begin() + 2)
//v2 now contains {1,2,3,4} instead of {1,2,10,3,4}

*/

#include<iostream>
#include <vector>
using namespace std;

void vectorFunction(vector<int> i);

int main()
{

    //vectors are pass by value just like regular variables, and unlike arrays which are pass by reference
    //changing i[0] in the function doesn't perserve the change in main
    vector<int> i = {1,2,3,4};
    vectorFunction(i);
    vector<int> v = {1,30,45,71,0,9, 34, 64, 91, 11};
    vector<int> v2;

    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] > 20)
        {
            v2.push_back(v[i]); // add element in v to v2
            v.erase(v.begin() + i);
            i--;
        }
    }

    cout<<"Vector 1 contains"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"Vector 2 contains"<<endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<endl;
    }



return 0;
}

//vector<int> is the type of the variable i
void vectorFunction(vector<int> i)
{
    cout<<i.size()<<endl; //can acess i since it's a function parameter
    i[0] = 15;
}
//change function to be pass by reference
void vectorFunctionByRef(vector<int>& i)
{
    cout<<i.size()<<endl; //can acess i since it's a function parameter
    i[0] = 15;
}