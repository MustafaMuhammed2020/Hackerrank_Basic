/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
using namespace std;

/** CREATE NUMBERS CLASS */
class Numbers
{
    /** PRIVATE MEMBERS */
private:
    int x, y ;
    /** PUBLIC MEMBERS */
public:
    Numbers();
    Numbers(int x, int y);
    /** FUNCTION TO ADD TWO OBJECTS */
    Numbers operator+(Numbers num);
    /** FUNCTION TO ADD OBJECT TO INTEGER NUMBER */
    friend Numbers operator+(Numbers num, int x);
    /** FUNCTION TO ADD INTEGER NUMBER TO OBJECT */
    friend Numbers operator+(int n, Numbers num);
    void ShowData();
    ~Numbers();
};



#endif // NUMBERS_H
