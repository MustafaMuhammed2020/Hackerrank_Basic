/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#include <iostream>
using namespace std;

/** INCLUDE Point CLASS */
#include"Point.h"

int main()
{
    /** CREATE TWO POINTS */
    Point P1(1,1),P2(2,2);
    if(P2 == P1)
        cout << "P2 And P1 Are Equal" << endl;
    else
        cout<< "P2 Is Not Equal To P1"<<endl;
    return 0;
}
