/*********************************************************/
/**       AUTHOR : MOSTAFA MOHAMED                       */
/**      DATE   : 8 MSEP 2021                            */
/**      VERSION : V01                                   */
/*********************************************************/
#include "rectangle.h"

/** RECTANGLE CONSTRUCTOR */
rectangle::rectangle(int a , int b)
{
    /** BOOK NEW LOCATIONS FOR THE POINTERS */
    /** TO AVOID DANGLING POINTERS */
    width = new int ;
    length = new int ;

    /** ASSIGN VALUES TO THE NEW LOCATIONS */
    *width = a ;
    *length = b ;
}

/** RECTANGLE DESTRUCTOR */
rectangle::~rectangle()
{

}
/** AREA FUNCTION */
/** CALCULATE THE AREA AND DELETE THE POINTERS */
rectangle::Area()
{
    return (*width * *length);
    delete width ;
    delete length ;
}
