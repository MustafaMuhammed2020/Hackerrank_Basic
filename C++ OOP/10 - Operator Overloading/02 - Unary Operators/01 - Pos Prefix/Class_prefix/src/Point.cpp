/*************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                               */
/** DATE    : 12 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/
#include "Point.h"

Point::Point()
{
    this -> x = 0 ;
    this -> y = 0 ;
}

Point::Point(int x, int y)
{
    this -> x = x ;
    this -> y = y ;
}

/** PREFIX IMPLEMENTATION */
Point Point::operator++()
{
    /** INCREMENT FIRST */
    x++ ;
    y++ ;
    /** RETURN AFTER INCREMENT */
    return *this ;
}

/** POSTFIX IMPLEMENTATION */
Point Point::operator++(int)
{
    /** ASSIGN BEFORE INCREMENT */
    Point T = *this ;
    /** INCREMENT */
    x++ ;
    y++ ;
    /** RETURN UNINCREMENTED VALUE */
    return T ;
}

/** PREFIX IMPLEMENTATION */
Point Point::operator--()
{
    /** INCREMENT FIRST */
    x-- ;
    y-- ;
    /** RETURN AFTER INCREMENT */
    return *this ;
}

/** POSTFIX IMPLEMENTATION */
Point Point::operator--(int)
{
    /** ASSIGN BEFORE INCREMENT */
    Point T = *this ;
    /** INCREMENT */
    x-- ;
    y-- ;
    /** RETURN UNINCREMENTED VALUE */
    return T ;
}

void Point::GetPoint()
{
    cout<<"X : "<<x<<" , "<<"Y : "<<y<<endl;

}

Point::~Point()
{
    //OBJECT DELETED
}
