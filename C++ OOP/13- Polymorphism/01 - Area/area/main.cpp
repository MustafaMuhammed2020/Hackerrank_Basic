/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 20 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/

#include <iostream>
using namespace std;

/** INCLUDE Shape Class */
#include"Shape.h"

int main()
{
    /** CREATE OBJECT OF EACH CLASS */
    Triangle Tr1;
    Rectangle Rec1;
    Circle C1 ;

    /** CORE OF POLYMORPHISM IS TO CREATE POINTER POINT TO EACH
    /** OBJECT AND ACCESS THE OBJECT THROUTH THE POINTER */
    Triangle *p1 = &Tr1 ;  /** EARLY BINDING (BEFORE RUN TIME) */
    Rectangle *p2 = &Rec1; /** EARLY BINDING (BEFORE RUN TIME) */
    Circle *p3 = &C1 ;     /** EARLY BINDING (BEFORE RUN TIME) */

    p1->SetValues(5.9 , 10);    ///VALUES OF TRIANGLE
    p2->SetValues(5, 10);   ///VALUES OF RECTANGLE
    p3->SetRaduis(10.5);     ///VALUE OF CIRCLE RADUIS

    /** PRINT THE AREA OF EACH SHAPE */
    cout<<"The Area Of Triangle  :  "<<p1->GetArea()<<endl;
    cout<<"The Area Of Rectangle :  "<<p2->GetArea()<<endl;
    cout<<"The Area Of Circle    :  "<<p3->GetArea()<<endl;
    return 0;
}
