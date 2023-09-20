/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/

#ifndef RECTANGLE_H
#define RECTANGLE_H

/** CREATE RECTANGLE CLASS */
class Rectangle
{
    /** PRIVATE MEMBERS */
    private:
        int width ;
        int length ;

    public:
        /** EMPTY CONSTRUCTORS */
        Rectangle();
        /** PARAMETERIZED CONSTRUCTOR */
        Rectangle(int W , int L);
        /** PUBLIC MEMBER TO GET AREA */
        int GetArea();
        /** PUBLIC MEMBER TO GET LENGTH */
        int GetLength();
        /** FRIEND FUNCTION RETURNS THE FACTORIAL OF CLASS MEMBERS */
        friend Rectangle ClassFactorial(Rectangle R);
        /** DESTRUCTOR */
        ~Rectangle();
};

#endif // RECTANGLE_H
