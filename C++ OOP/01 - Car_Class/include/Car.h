/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 6 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#ifndef CAR_H
#define CAR_H

/** INCLUDE CSTRING TO HANDLE STRINGS */
#include<cstring>

#include<iostream>
using namespace std ;

/** CREATE CLASS CAR */
class Car
{
    /** PRIVATE MEMBERS OF CAR */
private :
    char name[10] ;
    char color[10];
    char model[10] ;
    int number ;

    /** PUBLIC SETTERS AND GETTERS */
public  :
    /** FUNCTION TO SET CAR NAME */
    void SetName(char NAME[])
    {
        strcpy(name, NAME);
    }

    /** FUNCTION TO SET CAR COLOR */
    void SetColor(char COLOR[])
    {
        strcpy(color, COLOR);
    }

    /** FUNCTION TO SET CAR MODEL */
    void SetModel(char MODEL[])
    {
        strcpy(model, MODEL);
    }

    /** FUNCTION TO SET CAR NUMBER */
    void SetNum(int NUM)
    {
        number = NUM ;
    }

    /** CAR GETTERS */
    char* GetName()
    {
        return name ;
    }

    char* GetModel()
    {
        return model ;
    }

    char* GetColor()
    {
        return color ;
    }

    int GetNum()
    {
        return number ;
    }

    /** RETRIEVE ALL OBJECT DATA */
    void GetData(void)
    {
        cout<<"CAR NAME  : "<<GetName()<<"\n";
        cout<<"CAR COLOR : "<<GetColor()<<"\n";
        cout<<"CAR MODEL : "<<GetModel()<<"\n";
        cout<<"CAR NUMBER : "<<GetNum()<<"\n";
    }
};
#endif // CAR_H
