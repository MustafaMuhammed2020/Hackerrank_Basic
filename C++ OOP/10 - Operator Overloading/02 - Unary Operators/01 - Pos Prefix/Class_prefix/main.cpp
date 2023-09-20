/*************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                               */
/** DATE    : 12 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/
#include"Point.h"

int main()
{
    /** CREATE FOUR OBJECTS FROM Point */
    Point P1(4 ,5) , P2(1,1) , P3 ,P4;
    /** APPLY POSTFIX */
    P3 = P1++ ;
    /** APPLY PREFIX */
    P4 = --P2 ;

    /** PRINT POINTS DATA */
    P3.GetPoint();
    P1.GetPoint();
    P4.GetPoint();
    return 0;
}
