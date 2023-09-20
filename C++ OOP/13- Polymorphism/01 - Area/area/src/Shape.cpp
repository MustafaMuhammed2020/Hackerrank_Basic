/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 20 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/

#include "Shape.h"

Shape::Shape()
{
    width = 0 ;
    length = 0 ;
}

void Shape::SetValues(float w , float l)
{
    width = w ;
    length = l ;
}

void Shape::SetRaduis(float r)
{

    raduis = r ;
}

float Shape::GetArea()
{
    return 0 ;
}


float Rectangle::GetArea()
{
    return (length) * (width) ;
}

float Triangle::GetArea()
{
    return (0.5) * (length) * (width);
}

float Circle::GetArea()
{
    return (3.14) * pow(raduis ,2);
}
