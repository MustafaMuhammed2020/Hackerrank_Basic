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

Rectangle::Rectangle(int W, int L)
{
    width = W ;
    length = L ;
}

void Rectangle::ShowData()
{
    cout<<"Width : "<<width<<endl;
    cout<<"Length : "<<length<<endl;
}

Rectangle Rectangle::operator+(Rectangle R1)
{
    Rectangle R ;
    /** width , length MEANS THE CALLING OBJECT */
    R.width = width + R1.width ;
    R.length = length + R1.length ;

    return R ;
}

Rectangle Rectangle::operator-(Rectangle R1)
{
    Rectangle R ;
    /** width , length MEANS THE CALLING OBJECT */
    R.width = width - R1.width ;
    R.length = length - R1.length ;

    return R ;
}

Rectangle Rectangle::operator*(Rectangle R1)
{
    Rectangle R ;
    /** width , length MEANS THE CALLING OBJECT */
    R.width = width * R1.width ;
    R.length = length * R1.length ;

    return R ;
}

Rectangle Rectangle::operator/(Rectangle R1)
{
    Rectangle R ;
    /** width , length MEANS THE CALLING OBJECT */
    R.width = width / R1.width ;
    R.length = length / R1.length ;

    return R ;
}

Rectangle::~Rectangle()
{
    //OBJECT DELETED
}
