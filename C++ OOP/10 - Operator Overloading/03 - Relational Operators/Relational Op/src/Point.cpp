/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#include "Point.h"

Point::Point()
{
    this -> num1 = 0 ;
    this -> num2 = 0 ;
}

Point::Point(int num1, int mum2)
{
    this -> num1 = num1 ;
    this -> num2 = num2 ;
}

bool Point::operator<=(Point P)
{
    return ((num1 <= P.num1) && (num2 <= P.num2));
}

bool Point::operator>=(Point P)
{
    return ((num1 > P.num1) && (num2 > P.num2));
}

bool Point::operator==(Point P)
{
    return ((num1 == P.num1) && (num2 == P.num2));
}

Point::~Point()
{
    /// OBJECT DELETED
}
