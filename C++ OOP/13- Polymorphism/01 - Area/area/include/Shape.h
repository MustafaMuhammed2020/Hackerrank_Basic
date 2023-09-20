/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 20 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/

#ifndef SHAPE_H
#define SHAPE_H

#include<cmath>

/** CREATE SHAPE CLASS (BASE CLASS) */
class Shape
{
    /** PROTECTED MEMBERS */
protected:
    float width, length , raduis ;
public:
    /** EMPTY CONSTRUCTOR */
    Shape();
    /** SET VALUES OF MEMBERS */
    void SetValues (float w , float l);
    void SetRaduis(float r);
    /** VIRTUAL AREA FUNCTION */
    virtual float GetArea();

};


/** CREATE THE FIRST DERIVED CLASS */
class Rectangle : public Shape
{
    /** THE CORRESPONDING GetArea FUNCTION */
public:
    float GetArea();
};

/** CREATE THE SECOND DERIVED CLASS */
class Triangle : public Shape
{
    /** THE CORRESPONDING GetArea FUNCTION */
public:
    float GetArea();
};

/** CREATE THE SECOND DERIVED CLASS */
class Circle : public Shape
{
    /** THE CORRESPONDING GetArea FUNCTION */
public:
    float GetArea();
};
#endif // SHAPE_H
