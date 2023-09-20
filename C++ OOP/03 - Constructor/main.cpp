/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#include <iostream>

using namespace std;

/** INCLUDE STUDENT CLASS */
#include "Student.h"

int main()
{
    /** CREATE OBJECT WITH complete DATA */
    /** CALL PARAMETERIZED CONSTRUCTOR */
    Student s1("Ali" , "Comp.S" , 1600335);

    /** CREATE ANOTHER OBJECT WITH COPY CONSTRUCTOR */
    Student s4(s1);

    /** PRINT BOTH OBJECTS DATA */
    s4.p();
    s1.p();

    return 0;
}
