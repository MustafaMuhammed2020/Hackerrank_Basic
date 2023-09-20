/********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                          */
/** DATE    : 6 SEP 2021                                */
/** VERSION : V01                                       */
/********************************************************/


#include <iostream>
#include <cstring>
using namespace std;

// INCLUDE CAR CLASS
#include "Car.h"

int main()
{
    Car car1 ; //CREAATE OBJECT FROM CAR CLASS

    /**STORE CAR1 DATA VIA SETTERS */
    car1.SetName("KIA");
    car1.SetColor("Red");
    car1.SetModel("C990");
    car1.SetNum(2128);

    /** PRINT CAR1 DATA VIA GETTERS */
    cout<<"CAR1 features\n";

    car1.GetData();
    return 0;
}
