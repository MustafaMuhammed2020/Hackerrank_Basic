/***************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                    */
/** DATE     : 15 SEP 2021                         */
/** VERSION  : V01                                 */
/***************************************************/
#include "University.h"

/** UNIVERSITY CLASS IMPLEMENTATION */
University::University()
{
    strcpy(this->name   , "Empty");
    strcpy(this->phone  , "Empty");
    strcpy(this->address, "Empty");
    strcpy(this->depart , "Empty");

}
/** PARAMETERIZED CONSTRUCTOR */
University::University(char name[] , char address[] , char phone[] , char depart[])
{
    strcpy(this->name   , name);
    strcpy(this->phone  , phone);
    strcpy(this->address, address);
    strcpy(this->depart , depart);
}
/** CLASS SETTERS */
void University::SetName(char name[])
{
    strcpy(this->name  , name);
}
void University::SetPhone(char phone[])
{
    strcpy(this->phone , phone);
}
void University::SetAddress(char address[])
{
    strcpy(this->address , address);
}
void University::SetDepart(char depart[])
{
    strcpy(this->depart , depart);
}

void University::GetData()
{
    cout<<"Name    : "<< this->name <<endl;
    cout<<"Depart  : "<< this->depart <<endl;
    cout<<"Phone   : "<< this->phone <<endl;
    cout<<"Address : "<< this->address <<endl;


}


/** STUDENT CLASS IMPLEMENTATION */
Student::Student()
{
    this->ID = 0 ;
}

Student::Student(int ID)
{
    this->ID = ID ;
}

void Student::GetStudentData()
{
    GetData();
    cout<<"ID      : "<<this->ID<<endl;
}

/** PROFESSOR CLASS IMPLEMENTATION */
Professor::Professor()
{
    strcpy(this->Rank , "Professor");
    strcpy(this->Course , "empty");
}
Professor::Professor(char Rank[] , char Course[])
{
    strcpy(this->Rank , Rank);
    strcpy(this->Course , Course);
}
void Professor::GetProfessorData()
{
    GetData();
    cout<<"Rank    : "<< this->Rank <<endl;
    cout<<"Course  : "<<this->Course<<endl;
}
