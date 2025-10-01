#include <iostream>
#include <math.h>
using namespace std;

void exampleLoops();


int main()
{
    int n = 10;
    //print top and bottom row and create a box
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        if(i==0 || i== n -1 || j==0 || j == n-1 || i == j || j == n-i-1)
        {
            cout<<"*";
        }  
        else
        {
            cout<<" ";
        }
        cout<<endl;
    }








    exampleLoops();
}








void exampleLoops()
{
    //Outer loop controls row
    for(int i=0; i<10; i++ )
    {
        //inner loop controls columns
        for(int j=0; j<5; j++)
        {
            //i to the power of j
            cout<<pow(i,j)<<" ";
        }
        cout<<endl;
    }

    //outer loop creates 3 rows
    for(int i=0; i<3;i++)
    {
        //inner loop creates 5 columns
        for(int j=0; j<5; j++)
        {
            //checking if inner loop is even
            if(j%2 ==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<"-";
            }
        }
        cout<<endl;
    }
}