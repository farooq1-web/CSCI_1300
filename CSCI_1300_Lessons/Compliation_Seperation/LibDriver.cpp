#include "Library.h"
//driver file only needs to know what library looks like, not what it does
//implementation of library handles when it's compiled into the program

int main()
{
    Library lib; //default contructor
    Library lib2("Boulder Public Library");
    int pageCounts[] = {100, 200, 300};
    Library lib3("Boulder Public Library", pageCounts, 4);
    
    lib.addPageCount(500);
    cout<<"there are "<<lib.getCurrentBooks()<<" books in the library"<<endl;
    cout<<"there are "<<lib3.getPageCount(2)<<" total pages in that book"<<endl;
    cout<<"Average page count: "<<lib.getAveragePageCounts()<<endl;
    cout<<"Average page count: "<<lib3.getAveragePageCounts()<<endl;
    //Book is defined in the library.h header file
    Book books[5];
    //data members in a struct are public by default
    books[0].author = "Stephen King";
    
    
    return 0;
}
