/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#include "Numbers.h"

Numbers::Numbers()
{
    this -> x = 0 ;
    this -> y = 0 ;
}

Numbers::Numbers(int x , int y)
{
    this -> x = x ;
    this -> y = y ;
}

Numbers Numbers::operator+(Numbers num)
{
    Numbers Temp ;
    Temp.x = this -> x + num.x ;
    Temp.y = this -> y + num.y ;
    return Temp ;
}

void Numbers::ShowData()
{
    cout<<"x : "<<this -> x<<" , "<<"y : "<<this -> y<<endl;
}

Numbers::~Numbers()
{
    /// OBJECT DELETED
}
