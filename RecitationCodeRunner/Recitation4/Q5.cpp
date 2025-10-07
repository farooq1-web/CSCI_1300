/*
The university wants to know if their trees are producing more leaves on average since last year based on how many leaves they rake up this fall.

Write a function LeavesPerTree which takes a single input argument, the pounds of leaves the university raked up, as a double argument . Using the input value, the function will calculate the leaves per tree and print if it is more than last year.


Your function should be named LeavesPerTree

Your function takes one input argument: the pounds of leaves raked, as a double (assume always positive)

Your function does not have a return value

Your function prints/displays/outputs the number of leaves per tree and, if the trees are producing more leaves per tree, it also displays "More leaves than last year", on the next line.

Last year the university estimated 10,000 leaves per tree.

Each leaf weighs 0.001 pounds and there are 1,031 trees on campus.


Example output:

If the function is called with 100,000 as the input argument:  

96993.2

More leaves than last year



If the function is called with 10,000 as the input argument:  

9699.32


For example:

Test	Result
LeavesPerTree(10000);
9699.32
LeavesPerTree(100000);
96993.2
More leaves than last year

*/

#include <iostream>

using namespace std;


void LeavesPerTree (double leavesRaked)
{

    double leaf_weight = 0.001;
    double numTrees = 1031;
    double lastYearAvg = 10000;
    double totalLeaves = leavesRaked / leaf_weight;
    double leaves_per_tree = totalLeaves / numTrees;
    cout<<(leaves_per_tree)<<endl;
    
    if(leaves_per_tree>10000)
    {
        cout<<"More leaves than last year";
    }

}

