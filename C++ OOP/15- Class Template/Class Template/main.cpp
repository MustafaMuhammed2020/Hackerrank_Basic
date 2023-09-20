/**************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                */
/** DATE    : 21 SEP 2021                                     */
/** VERSION : V01                                             */
/**************************************************************/
#include"Object.h"

int main()
{
    /** CREATE THREE OBJECTS WITH DIFFERENT TYPES */
    Object <int>A(10 , 20);
    Object <char>B('A' , 'B');
    Object <double>C(12.5, 20.44);

    /** PRINT THE MAXIMUM OF EACH PAIR */
    cout<<"Max is :  "<<A.Max()<<endl;

    cout<<"Max is :  "<<B.Max()<<endl;

    cout<<"Max is :  "<<C.Max()<<endl;

    return 0;
}
