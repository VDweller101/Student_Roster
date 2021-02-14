#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


/*----------Move to degree.h-----------*/
enum DegreePlan { SECURITY, NETWORK, SOFTWARE };

/*----------Move to student.cpp--------*/
struct Student
{
    DegreePlan plan = SECURITY;

};

int main()
{
    Student stu = new Student();

    /*
        Program requirements:

        ////////Original Data:////////
        const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Justin,Coffey,jcoff57@wgu.edu,31,5,2,1,SOFTWARE"};

        ///////Required Files:///////
        degree.h
        student.h
        student.cpp
        roster.h
        roster.cpp
        main.cpp

        //////


    */

}
