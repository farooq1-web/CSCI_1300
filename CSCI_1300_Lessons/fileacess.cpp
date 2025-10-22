/*ifstream - read from file

//ofstream - write to file (output)

//First need to open the file to read from file stream
//ifstream is a variable type
//ifstream defined in C++ library
ifstream fin;

//opens a file that exists in the same directory and associates the variable with the text file
fin.open("testFile.txt");

//Did the file open correctly or does the file exists
if(fin.fail())
{
    cout<<"File coudn't be opened!"<<endl;
    return -1 //Program exits if file didn't open
    //-1 to indicate the program didn't execute sucessfully
}

writing out to a file:

//ofstream is also a variable type, out_file is name of variable
ofstream out_file;
//This will create a file called output.txt that can be written to
out_file.open("output.txt");
//This will write out to a file "the word is"<word>
out_file<<"The word is"<<word<<endl;
*/


#include <iostream>
#include <fstream> //need this to use ifstream and ofstream
using namespace std;

int main()
{
    /*
    ifstream in;
    in.open("in.txt");//needs to exist
    out.open("out.txt");
    if(in.fail())
    {
        cout<<"File failed to open";
        return -1;

    }
    string word;
    in>>word; //read up to a space or a new line
    cout<<word;
    out<<"Hello";//write word to out.txt
*/

    int dataArray[10];//use array to store data from file
    ifstream data; //create new ifstream object
    data.open("data.txt"); //associate data with data.txt
    if(data.fail())
    {
        cout<<"failed to open file";
        return -1;

    }
    int x=0; //Index ino dataArray
    data>>dataArray[0];
    
    cout<<dataArray[x]<<endl;
    x++;
    while(data>>dataArray[x])
    {
        cout<<dataArray[x]<<endl;
        x++;
    }


    double average;
    double sum = 0.0;
    for(int i=0; i<10; i++)
    {
        sum +=dataArray[i];
    }
    average = sum/10.0;
    cout<<"the average is:"<<average<<endl;
    //create of stream object to store the average
    ofstream avg("average.txt");
    avg<<"the average is "<<average<<endl;

    return 0;


    
}

