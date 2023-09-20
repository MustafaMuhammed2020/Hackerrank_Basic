/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 12 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/

#include "Student.h"

Student::Student()
{
    this -> ID = 0;
    strcpy(this -> NAME , "No Name");
}

Student::Student(int ID , char NAME[])
{
    this -> ID = ID ;
    strcpy(this -> NAME , NAME);
}

void Student::GetAddress()
{
    cout<<"The Address Of Student "<<this->NAME<<" Is "<<this<<endl;
}

Student::~Student()
{
    //OBJECT DELETED
}
