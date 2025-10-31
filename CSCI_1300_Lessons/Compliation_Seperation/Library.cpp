

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
#include "Library.h" //syntax is differnt for a header that you create than it is for a c++ header
//This file includes implementation of library class defined in library.h
double Library::getAveragePageCounts()
{
    double sum =0;
    for (int i = 0; i < _current_books; i++)
    {
        sum += _page_counts[i].pages; //changing page counts to book array means we need the page numbers
    }
    if(_current_books == 0)
    {
        return 0;
    }
    else
    {
    return sum/_current_books;
    }
}
string Library::getName()
{
    return _name;
}

int Library::getCurrentBooks()
{
    return _current_books;
}

void Library::setName(string name)
{
    _name = name; //update the private data member
}

int Library::getPageCount(int index)
{
    if(index >=_MAX_BOOKS || index < 0)
    {
        return -1;
    }
    else
    {
        return _page_counts[index].pages;
    }
}
bool Library::addPageCount(int count)
{
    //check if there is room in the array, if so add to array and increment _current_books
    if(_current_books == _MAX_BOOKS)
    {
        return false;
    }
    else
    {
        _page_counts[_current_books].pages = count;
        _current_books++;
    }
    return true;
}
//constructor implementation
Library::Library()
{
    _current_books = 0;
    _name = "";
    for(int i=0; i<_MAX_BOOKS; i++)
    {
        _page_counts[i].pages = 0;
    }
    cout<<"in the default contructor"<<endl;
}
Library::Library(string name)
{
_name = name;
_current_books = 0;
for (int i = 0; i < _MAX_BOOKS; i++)
{
    _page_counts[i].pages = 0;
}
cout<<"one parameter contructor"<<endl;

}

Library::Library(string name, int pageCounts[], int currentBooks)
{
    _name = name;
    _current_books = currentBooks;
    for (int i = 0; i < _current_books; i++)
    {
        _page_counts[i].pages = pageCounts[i];
    }
    for (int i = _current_books; i<_MAX_BOOKS; i++)
    {
        _page_counts[i].pages = 0;
    }
    cout<<"3 parameter contructor"<<endl;
    
}