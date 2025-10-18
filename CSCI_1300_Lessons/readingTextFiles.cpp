//getline(stream to read, string to save into, optional delimiter)
//getline(fin, str, 'a')//reads up to to an 'a' and saves to str, removes a
//stringsteam ss(str) //extends functiona;ity of streams to strings
//stoi - convert string to integer
//stod - convert string to double

/*
create a text file called _ that contains 10 lines with one column that is a string and the second column that 
is an integer. Read all 10 lines and parse them into two arrays, one for the strings and one for the numbers
*/

#include <iostream>
#include <fstream>//this is for file stream
#include <sstream>//This is for string stream
using namespace std;

int main()
{
    ifstream fin("data.txt");
    string countries[10];
    int btu[10];
    //check that the file opened correctly, exit program if faileed
    if(fin.fail())
    {
        cout<<"File did not open"<<endl;
        return -1;
    }
    string str;//this string is to s
    int x =0;
    string item;
    while(getline(fin, str))
    {
        
        cout<<str<<endl;
        stringstream ss(str);
        getline(ss,item, ','); //read country first
        countries[x] = item;
        getline(ss,item);//read btu
        btu[x] = stoi(item);
        x++;
    }
    //read each line in file
    //convert line to string stream
    //loop through fields in stringstream and store accordingly
    //loop through arrays to check that data is read correctly
    for(int x = 0; x<10; x++)
    {
        cout<<countries[x]<<" "<<endl;
    }
    
    return 0;
}