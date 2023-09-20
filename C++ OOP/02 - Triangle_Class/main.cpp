/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#include <iostream>

using namespace std;

/** INCLUDE TRIANGLE CLASS */
#include "TRIANGLE.h"

int main()
{
    /** CREATE TWO OBJECTS FROM TRIANGLE CLASS */
    Triangle T1, T2 ;

    /** T1 DATA */
    T1.SetBase(10);
    T1.SetHeight(10);

    /** T2 DATA */
    T2.SetBase(8);
    T2.SetHeight(8);

    /** PRINT T1 && T2 AREA */
    cout << "Area of T1 : "<< T1.GetArea()<< endl;
    cout << "Area of T2 : "<<T2.GetArea()<< endl;
    return 0;
}
