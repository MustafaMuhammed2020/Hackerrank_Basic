/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/

#include <iostream>

using namespace std;

#include "Destructor.h"

int main()
{
    /** CREATE TO OBJECTS */
    Rectangle R1(2,3) , R2(4,6) ;

    cout<<"R1 Area =  " <<R1.GetArea()<<endl;
    cout<<"R2 Area =  " <<R2.GetArea()<<endl;
    cout<<"R1 Circumference =  " <<R1.GetCircumference()<<endl;
    cout<<"R2 Circumference =  " <<R2.GetCircumference()<<endl;
    return 0;
}
