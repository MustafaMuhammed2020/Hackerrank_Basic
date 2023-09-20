/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#include "Numbers.h"

Numbers::Numbers()
{
    this -> num1 = num1 ;
    this -> num2 = num2 ;
}

Numbers::Numbers(int num1 , int num2)
{
    this -> num1 = num1;
    this -> num2 = num2 ;
}

void Numbers::ShowData()
{
    cout<<"Num1 : "<<num1<<" , "<<"Num2 : "<<num2<<endl;
}
Numbers::~Numbers()
{
    /// OBJECT DELETED
}
