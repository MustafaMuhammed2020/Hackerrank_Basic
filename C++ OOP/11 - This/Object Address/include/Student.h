/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 12 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

#include<cstring>

/** CREATE Student CLASS */
class Student
{
    /** PRIVATE MEMBERS */
private:
    int ID ;
    char NAME[10];
    /** PUBLIC FUNCTIONS */
public:
    Student();
    Student(int ID , char NAME[]);
    void GetAddress();
    ~Student();
};

#endif // STUDENT_H
