#include <iostream>
#include <math.h>
using namespace std;

void exampleLoops();


int main()
{
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