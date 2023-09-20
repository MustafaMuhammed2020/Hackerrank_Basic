/***************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                    */
/** DATE     : 15 SEP 2021                         */
/** VERSION  : V01                                 */
/***************************************************/
#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
using namespace std;

#include<cstring>

/** CREATE UNIVERSITY CLASS */
class University
{

    /** PROTECTED MEMBERS TO BE INHERITED */
protected:
    char name[10];
    char address[10];
    char phone[10];
    char depart[10];


public:
    University();
    University(char name[], char address[], char phone[], char depart[]);
    void SetName(char name[]);
    void SetAddress(char address[]);
    void SetPhone(char phone[]);
    void SetDepart(char depart[]);
    void GetData();

};

/** STUDENT CLASS INHERIT UNIVERSITY CLASS */
class Student :public University
{
private:
    int ID;
public:
    Student();
    Student(int ID);
    void GetStudentData();

};

/** PROFESSOR CLASS INHERIT UNIVERSITY CLASS */
class Professor :public University
{
private:
    char Rank[10];
    char Course[10];

public:
    Professor();
    Professor(char Rank[] , char Course[]);
    void GetProfessorData();

};

#endif // UNIVERSITY_H
