/************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                              */
/** DATE    : 12 SEP 2021                                   */
/** VERSION : V01                                           */
/************************************************************/

#include <iostream>
using namespace std;

/** INCLUDE Numbers CLASS */
#include"Numbers.h"

int main()
{
    /** CREATE OBJECT FROM Numbers */
    Numbers n1(0,0);
    if(!n1)
    cout << "Object Reversed Successfully" << endl;
    return 0;
}
