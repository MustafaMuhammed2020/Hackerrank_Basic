/*********************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                          */
/** DATE     : 11 SEP 2021                               */
/** VERSION  : V01                                       */
/*********************************************************/
#include <iostream>
using namespace std;
/** INCLUDE RECTANGLE CLASS */
#include"Rectangle.h"

int main()
{
    /** CREATE THREE OBJECTS */
    Rectangle R1(5,5);
    Rectangle R2(5,5);
    Rectangle R3(5,5);

    /** CREATE ARRAY OF RECTANGLES */
    Rectangle Array[3]={R1,R2,R3};

    /** PRINT THE SUM OF RECTANGLES AREAS */
    cout<<"Sum Of Areas : "<<AreaSum(Array , 3)<<endl;

    return 0;
}

/** FRIEND FUNCTION IMPLEMENTATION */
int AreaSum(Rectangle Rec_Arr[] , int Arr_size)
{
    int Areas = 0 ;
    for(int counter = 0 ; counter < Arr_size ; counter++)
    {
        /** HERE I CAN ACCESS PRIVATE CLASS MEMBERS WITHOUT ERROR */
        Areas += (Rec_Arr[counter].length * Rec_Arr[counter].width);
    }
    return Areas ;
}
