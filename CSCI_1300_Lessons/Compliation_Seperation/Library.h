#include <iostream>
using namespace std;

//split the library class  into Library.h and Library.cpp
//put the main function in LibDriver.cpp
//build the program
//we only need to define library one time
//header guards prevent multiple definitions of library

//modify the Library class to store _page_counts as a struct
//the struct should have name, author, pages, year
#ifndef LIBRARY_H
#define LIBRARY_H
struct Book      
{
    string name;
    string author;
    int pages;
    int year;
};


class Library
{
    
    private:
    const static int _MAX_BOOKS = 10;
    Book _page_counts[_MAX_BOOKS]; //Number of pages of all books in the libary
    int _current_books; //count of number of books, up to _MAX_BOOKS
    string _name; //This is the name of the library

    public:
    //default 
    Library();
    //string parameter
    Library(string);
    Library(string, int[], int);

    //parameter types have to match implementation, dont need variable names in the def

    string getName();
    int getCurrentBooks();
    void setName(string);
    int getPageCount(int);
    bool addPageCount(int);
    double getAveragePageCounts();
};

#endif