/*********************************************************/
/**       AUTHOR : MOSTAFA MOHAMED                       */
/**      DATE   : 8 MSEP 2021                            */
/**      VERSION : V01                                   */
/*********************************************************/
#ifndef RECTANGLE_H
#define RECTANGLE_H

/** CREATE RECTANGLE CLASS */
class rectangle
{
    private:
        int *width , *length ; /** pointers not variables */

    public:
        /** CONSTRUCTOR , DESTRUCTOR , AREA */
        rectangle(int , int );
        ~rectangle();
        int Area();

};

#endif // RECTANGLE_H
