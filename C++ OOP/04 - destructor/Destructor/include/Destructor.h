/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 7 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H

class Rectangle
{

private :
    float width, length ;

public :
    /** CREATE EMPTY CONSTRUCTOR */
    Rectangle()
    {
        width =  0.0F ;
        length = 0.0f ;
        cout<<"empty object was created "<<endl;
    }

    /** CREATE PARAMETERIZED CONSTRUCTOR */
    Rectangle(float w, float l)
    {
        width = w ;
        length = l ;
    }

    /** FUNCTION TO RETURN AREA */
    float GetArea()
    {
        return width * length ;
    }

    /** FUNCTION TO RETURN THE circumference */
    float GetCircumference()
    {
        return width + length ;
    }

    /** CREATE DESTRUCTOR */
    ~Rectangle()
    {
        cout<< width<<" "<< length << "  was destructed"<<endl;
    }
};

#endif // DESTRUCTOR_H
