/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#ifndef POINT_H
#define POINT_H

/** CREATE POINT CLASS */
class Point
{
    /** PRIVATE MEMBERS */
private:
    int num1, num2 ;
    /** PUBLIC MEMBERS */
public:
    /** EMPTY CONSTRUCTOR */
    Point();
    /** PARAMETERIZED CONSTRUCTOR */
    Point(int num1, int num2);
    /** >= OPERATOR */
    bool operator>=(Point P);
    /** <= OPERATOR */
    bool operator<=(Point P);
    /** == OPERATOR */
    bool operator==(Point P);
    /** DESTRUCTOR */
    ~Point();
};

#endif // POINT_H
