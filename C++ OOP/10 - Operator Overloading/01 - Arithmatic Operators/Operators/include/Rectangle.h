/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

/** CREATE Rectangle CLASS */
class Rectangle
{
    /** PRIVATE MEMBERS*/
private:
    int width , length ;
public:
    /** EMPTY CONSTRUCTOR */
    Rectangle();

    /** PARAMETERIZED CONSTRUCTOR */
    Rectangle(int W , int L);

    /** PUBLIC FUNCTION TO SHOW DATA */
    void ShowData();

    /** OVERLOAD ADDITION OPERATOR */
    Rectangle operator+(Rectangle R1 );

    /** OVERLOAD SUBTRACTION OPERATOR */
    Rectangle operator-(Rectangle R1 );

    /** OVERLOAD MULTIPLICATION OPERATOR */
    Rectangle operator*(Rectangle R1 );

    /** OVERLOAD DEVISION OPERATOR */
    Rectangle operator/(Rectangle R1 );

    /** DESTRUCTOR */
    ~Rectangle();
};

#endif // RECTANGLE_H
