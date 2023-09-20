/*************************************************************/
/** AUTHOR  :  MUSTAFA MUHAMMED                              */
/** DATE    :  9 SEP 2021                                    */
/** VERSION : V01                                            */
/*************************************************************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include<cstring>

/** CREATE CIRCLE CLASS */
class Circle
{
    /** PRIVATE MEMBERS */
private :
    double raduis ;
    char color[10];

    /** PUBLIC GETTERS , SETTERS , CONSTRUCTORS */
public :
   Circle();
   Circle(double rad , char n[]);
   void SetRaduis(double rad);
   void SetColor(char n[]);
   double GetRaduis();
   char * GetColor();
   double GetArea();
   ~Circle();

};

#endif // CIRCLE_H
