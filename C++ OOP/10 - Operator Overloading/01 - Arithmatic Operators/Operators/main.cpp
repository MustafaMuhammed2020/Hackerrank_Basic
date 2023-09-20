/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/

/** INCLUDE Rectangle CLASS */
#include"Rectangle.h"

int main()
{
    /** CREATE THREE OBJECTS */
    Rectangle R1(10 , 10) , R2(2,2) , R3 , R4;

    /** ADD MEMBERS OF R1 , R2 */
    R3 = R1 + R2 ; //EQUALS TO R1.operator+(R2)

    /** SUBTRACT MEMBERS OF R1 , R2 */
    R4 = R1 - R2 ; //EQUALS TO R1.operator-(R2)

    cout<<"Addition Of R1 and R2 Members : "<<endl;
    /** PRINT R3 DATA */
    R3.ShowData();

    cout<<"Subtraction Of R1 and R2 Members : "<<endl;
    /** PRINT R4 DATA */
    R4.ShowData();

    return 0;
}
