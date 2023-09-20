/*********************************************************/
/**       AUTHOR : MOSTAFA MOHAMED                       */
/**      DATE   : 8 MSEP 2021                            */
/**      VERSION : V01                                   */
/*********************************************************/
#include <iostream>

using namespace std;

/** INCLUDE RECTANGLE CLASS*/
#include "rectangle.h"

int main()
{
    /** CREATE TO OBJECTS */
    rectangle r1(10 , 10);
    rectangle r2(20 ,20);

    /** PRINT AREA OF OBJECTS */
    cout<< r1.Area() << endl;
    cout<< r2.Area() << endl;
    return 0;
}
