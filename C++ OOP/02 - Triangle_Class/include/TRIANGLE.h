/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#ifndef TRIANGLE_H
#define TRIANGLE_H

/** CREATE TRIANGLE CLASS */
class Triangle
{
    /** PRIVATE MEMBERS */
private :
    float base ;
    float height ;

   /** PUBLIC GETTERS AND SETTERS */
public :
    void SetBase(float BASE)
    {
        base = BASE ;
    }

   void SetHeight(float HEIGHT)
   {
       height = HEIGHT ;
   }

   float GetArea()
   {
       return (0.5) * (height) * (base);
   }

};

#endif // TRIANGLE_H
