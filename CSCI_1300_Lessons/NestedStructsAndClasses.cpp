#include <iostream>

using namespace std;

//Course struct
//student struct
//calculate GPA


struct Course
{
    string courseName;
    int credits;
    char grades;
};
struct Student
{
    string name;
    int id;
    Course courses[3];
};

double calculateGPA(Student s);

int main()
{

    //create an instance of student
    //this allocates memory for all members of Student, including the coarse array
    Student s;

    s.name = "Bob";
    s.id = 123;
    s.courses[0].courseName = "math";
    s.courses[0].credits = 4;
    s.courses[0].grades = 'A';

    s.courses[1].courseName = "CSCI";
    s.courses[1].credits = 3;
    s.courses[1].grades = 'B';

    s.courses[2].courseName = "Physics";
    s.courses[2].credits = 4;
    s.courses[2].grades = 'B';


    double gpa = calculateGPA(s);
    cout<< gpa << endl;

    return 0;
}

double calculateGPA(Student s)
{
    double gpa = 0;
    //loop through Courses array in student
    //A =4, B=3, C=2 , d=1, f=0
    double points = 0;
    int totalPoints = 0;
    int totalCredits = 0;
    for (int i = 0; i < 3; i++)
    {
        char grades = s.courses[i].grades;
        switch (grades)
        {
        case 'A':
            points = 4;
            break;
        case 'B':
            points = 3;
            break;
        case 'C':
            points = 2;
            break;
        case 'D':
            points = 1;
            break;
        case 'F':
            points =0;
            break;
        default:
        points = 0;
            break;
        }
        totalPoints += points *s.courses[i].credits;
        totalCredits += s.courses[i].credits;
    }
    gpa = totalPoints/totalCredits;
    

    return gpa;
}




