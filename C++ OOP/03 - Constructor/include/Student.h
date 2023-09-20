/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#ifndef STUDENT_H
#define STUDENT_H

#include<cstring>

class Student
{
private:
    char s_name[10];
    char s_depart[20];
    int  s_id ;

public:
    /** EMPTY CONSTRUCTOR */
    Student()
    {
        strcpy(s_name, "none");
        strcpy(s_depart, "none");
        s_id = 0 ;
    }

    /** PARAMETERIZED CONSTRUCTOR */
    /** TAKES FULL OBJECT DATA    */
    /** NAME , DEPARTMENT , ID    */
    Student(char n[], char d[], int num)
    {
        strcpy(s_name, n);
        strcpy(s_depart, d);
        s_id = num ;
    }

    /** COPY CONSTRUCTOR */
    Student(const Student &S1)
    {
        strcpy(s_name,S1.s_name);
        strcpy(s_depart, S1.s_depart);
        s_id = S1.s_id;
    }

    /** PUBLIC FUNCTION TO PRINT OBJECT'S DATA */
    void p()
    {
        cout<< s_id << " " << s_name << " "<< s_depart<<endl;
    }
};

#endif // STUDENT_H
