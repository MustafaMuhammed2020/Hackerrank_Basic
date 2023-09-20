/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/

#include <iostream>
using namespace std;

#include"Rectangle.h"

int Fact(int num);

int main()
{
    /** CREATE OBJECT FROM Rectangle */
    Rectangle B(3 , 3);
    cout<<"Before Factorial The Area Is "<<B.GetArea()<<endl;
    cout<<"After Factorial The Area Is "<<ClassFactorial(B).GetArea()<<endl;
    return 0;
}

int Fact(int num)
{
    int factorial = 1 ;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i ;
    }
    return factorial ;
}

Rectangle ClassFactorial(Rectangle R)
{
    Rectangle C ;
    /** ACCESSING Rectangle PRIVATE MEMBERS WILL NOT RESULT AN ERROR BECAUSE IT IS A FRIEND FUNCTION */
    C.width = Fact(R.width);
    C.length = Fact(R.length);
    return C ;
}
