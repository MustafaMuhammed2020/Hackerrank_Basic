/************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                              */
/** DATE    : 10 SEP 2021                                   */
/** VERSION : V01                                           */
/************************************************************/

/** INCLUDE BOOKS CLASS */
#include"Books.h"

int main()
{
    /** CREATE BOOK OBJECTS */
    Books B1("MIDNIGHT" , "AHMED" , 12);
    Books B3("MY COFFEE" , "MUSTAFA" , 9);
    Books B2("YES      " , "Anna" , 23);
    Books B4("MID      " , "AHMED" , 14);
    Books B5("NIGHTS   " , "A" , 0);

    /** GET ALL BOOKS */
    B1.GetBooks();
    return 0;
}
