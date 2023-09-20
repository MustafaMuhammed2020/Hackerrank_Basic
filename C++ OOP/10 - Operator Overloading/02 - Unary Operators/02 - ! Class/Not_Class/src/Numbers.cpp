/************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                              */
/** DATE    : 12 SEP 2021                                   */
/** VERSION : V01                                           */
/************************************************************/
#include "Numbers.h"

Numbers::Numbers()
{
    num1 = 0 ;
    num2 = 0 ;
}

Numbers ::Numbers(int num1, int num2)
{
    this -> num1 = num1 ;
    this -> num2 = num2 ;
}

bool Numbers::operator!()
{
    /**
        bool Result ;
        if( this -> num1 && this -> num2 )
            Result = false ;
        else
            Result = true;

        return Result ;
    **/
    return (num1 == 0 && num2 == 0);
}
Numbers::~Numbers()
{
    //OBJECT DELETED
}
