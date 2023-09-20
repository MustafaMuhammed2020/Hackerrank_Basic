/*************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                               */
/** DATE    : 12 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

/** CREATE Point CLASS */
class Point
{
    /** PRIVATE MEMBERS */
private:

    int x , y ;
    /** PUBLIC MEMBERS */
public:
    Point();
    Point(int x , int y);
    Point operator++(); /// PREFIX
    Point operator++(int);/// POSTFIX
    Point operator--(); /// PREFIX
    Point operator--(int);/// POSTFIX
    void GetPoint();
    ~Point();

};

#endif // POINT_H
