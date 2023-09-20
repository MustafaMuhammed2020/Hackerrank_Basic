/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H

/** CREATE Rectangle CLASS */
class Rectangle
{
    /** PRIVATE MEMBERS */
private:
    int width , length ;
    /** PUBLIC MEMBERS */
public:
    /** EMPTY CONSTRUCTOR */
    Rectangle();
    /** PARAMETERIZED CONSTRUCTOR */
    Rectangle(int W , int L);
    /** FRIEND FUNCTION TAKES ARRAY OF RECTANGLES
        AND RETURN THE SUM OF THEIR ARREAS        */
    friend int AreaSum(Rectangle Rec_Arr[] , int Arr_size);
    /** DESTRUCTOR */
    ~Rectangle();
};

#endif // RECTANGLE_H
