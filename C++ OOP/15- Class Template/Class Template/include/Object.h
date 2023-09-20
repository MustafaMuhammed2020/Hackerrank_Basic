/**************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                */
/** DATE    : 21 SEP 2021                                     */
/** VERSION : V01                                             */
/**************************************************************/
#ifndef OBJECT_H
#define OBJECT_H

#include<iostream>
using namespace std ;

template<class T>
class Object
{
    /** CREATE TWO VARIABLES FROM T TYPE */
private:
    T ob1, ob2 ;

public:
    Object() /** EMPTY CONSTRUCTOR */
    {
        this -> ob1 = 0 ;
        this -> ob2 = 0 ;
    }

    Object (T ob1, T ob2)  /** PARAMETERIZED CONSTRUCTOR */
    {
        this -> ob1 = ob1 ;
        this -> ob2 = ob2 ;
    }

    T Max()  /** PRINT THE MAXIMUM OF TWO INPUTS */
    {
        return (ob1>ob2 ? ob1 : ob2);
    }

    ~Object() /** DESTRUCTOR */
    {
        cout<<"Object Deleted Successfully \n" ;
    }
};

#endif // OBJECT_H
