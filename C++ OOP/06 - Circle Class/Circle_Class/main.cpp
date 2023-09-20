/*************************************************************/
/** AUTHOR  :  MUSTAFA MUHAMMED                              */
/** DATE    :  9 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/

#include <iostream>
using namespace std;

/** INCLUDE Circle CLASS */
#include "Circle.h"

int main()
{
    /** CREATE TWO OBJECTS */
    Circle C1 , C2(5 , "Red");

    /** OBJECT ONE AREA */
    cout <<"C1 Area = "<< C1.GetArea() << endl;
    return 0;
}
