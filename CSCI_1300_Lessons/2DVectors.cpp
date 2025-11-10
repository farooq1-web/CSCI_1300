#include <iostream>
#include <vector>
using namespace std;


//2D vector is a vector of vectors
//each row can have a different number of columns


int main()
{
    //the type of my vector is a vector of integers
    vector<vector<int>> vectorOfVectors;


    vector<int> v4 = {1,2,3};
    vectorOfVectors.push_back(v4);
    //size of vectorOfVectors = 1;
    vector<int> v5 = {12,13,14,15};
    vectorOfVectors.push_back(v5);


    //displayData
    for(int i =0; i < vectorOfVectors.size(); i++)
    {
        for(int j = 0; j<vectorOfVectors[i].size(); j++)
        {
            cout<<vectorOfVectors[i][j]<<endl;
        }
    }
    return 0;
}

