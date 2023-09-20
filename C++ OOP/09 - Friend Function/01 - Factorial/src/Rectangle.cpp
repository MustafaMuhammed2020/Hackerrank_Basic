/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/

#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 0 ;
    length = 0 ;
}

Rectangle::Rectangle(int W , int L)
{
    width = W ;
    length = L ;
}

int Rectangle::GetArea()
{
    return (width * length) ;
}
int Rectangle::GetLength()
{
    return length ;
}

Rectangle::~Rectangle()
{
    //OBJECT DELETED
}
