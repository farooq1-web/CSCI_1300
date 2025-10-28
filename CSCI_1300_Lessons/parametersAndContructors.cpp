

//implicit parameters vs explicit parameters


/*
Special member functions that initialzie the data members of an object
called automatically when the object is created
the name of a contructor is the same as the class name
contructors dont return values, and there not a void type
default contructors have no parameters
if you dont define a contructor in c++ will still still contruct the object but data members remain uninitialized


contructors help with the start, initializing variables to a starting value instead of having to call a method

Classes can have multiple contructors

There are default contructors and parametized constructors

Contructors must be unique in terms of number of parameters and type
*/



//Define library class private members
//Define default contructor
//Define parametized contructor that takes name
//define parametized contructor that takes array of books

#include <iostream>
using namespace std;

class Library
{
    
    private:
    const static int _MAX_BOOKS = 10;
    int _page_counts[_MAX_BOOKS]; //Number of pages of all books in the libary
    int _current_books; //count of number of books, up to _MAX_BOOKS
    string _name; //This is the name of the library

    public:
    //default 
    Library();
    //string parameter
    Library(string);
    Library(string, int[], int);

    //parameter types have to match implementation, dont need variable names in the def



};
//constructor implementation
Library::Library()
{
    _current_books = 0;
    _name = "";
    for(int i=0; i<_MAX_BOOKS; i++)
    {
        _page_counts[i] = 0;
    }
}
Library::Library(string name)
{
_name = name;
_current_books = 0;
for (int i = 0; i < _MAX_BOOKS; i++)
{
    _page_counts[i] = 0;
}

}

Library::Library(string name, int pageCounts[], int currentBooks)
{
    _name = name;
    _current_books = currentBooks;
    for (int i = 0; i < _current_books; i++)
    {
        _page_counts[i] = pageCounts[i];
    }
    
}


int main()
{

}