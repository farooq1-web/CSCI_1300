
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //overides what is already in the file
    //ofstream file("output.txt"); 
    ofstream file("output.txt", ios::app);
    //if file is not available
    if(!file.is_open())
    {
        cout<<"File not found"<<endl;
        return 1;
    }
    //variables
    string name;
    double score;

    //get User input
    cout<<"enter name: ";
    getline(cin, name);
    cout<<"enter score: ";
    cin >>score;

    //write the file
    file<<name<<", "<<score<< endl;

    //save and close the file
    file.close();

    cout<<"Data saved to output.txt file"<<endl;

}