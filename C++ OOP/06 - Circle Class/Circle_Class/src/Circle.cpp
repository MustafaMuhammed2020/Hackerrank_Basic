/*************************************************************/
/** AUTHOR  :  MUSTAFA MUHAMMED                              */
/** DATE    :  9 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/

#include "Circle.h"

/** EMPTY CONSTRUCTOR IMPLEMENTATION */
Circle::Circle()
{
    raduis = 0 ;
    strcpy(color , "No Color");
}

/** PARAMETERIZED CONSTRUCTOR IMPLEMENTATION */
Circle::Circle(double rad , char n[])
{
    raduis = rad ;
    strcpy(color , n);
}

/** SETTERS , GETTERS IMPLEMENTATION */
void Circle::SetColor(char n[])
{
    strcpy(color , n);
}

void Circle::SetRaduis(double rad)
{
    raduis = rad ;
}

char* Circle::GetColor()
{
    return color ;
}

double Circle::GetRaduis()
{
    return raduis ;
}

double Circle::GetArea()
{
    return (3.14 * raduis * raduis);
}

/** DESTRUCTOR IMPLEMENTATION */
Circle::~Circle()
{
    //active object deleted
}
