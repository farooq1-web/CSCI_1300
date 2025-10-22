#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
//A struct is a container that keeps different pieces of data about the same entity together
//create a struct that can store a string and an int
//this is defined outside of any function


#include <iostream>
using namespace std;

struct Adress
{
    int houseNumber;
    string street;
    string city;
    int zipCode;

};

int main()
{
    
    Adress adress; //creating a variable of type adress in memory
    adress.street = " ";
}


















/*


struct CountryData
{
    string name;
    int btu;
};

int main()
{
    ifstream fin("data.txt");

    CountryData cdata[10]; //variable name is cdata

    //string countries[10];
    //int btu[10];
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
        //countries[x] = item;
        cdata[x].name = item;
        getline(ss,item);//read btu
        //btu[x] = stoi(item);
        cdata[x].btu = stoi(item);
        x++;
    }
    //read each line in file
    //convert line to string stream
    //loop through fields in stringstream and store accordingly
    //loop through arrays to check that data is read correctly
    for(int x = 0; x<10; x++)
    {
        cout<<cdata[x].name<<" "<<cdata[x].btu<<endl;
    }
    
    return 0;
}

*/