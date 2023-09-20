/******************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                        */
/** DATE    : 21 SEP 2021                             */
/** VERSION : V01                                     */
/******************************************************/
#include <iostream>
using namespace std;

/** FUNCTION NO.1 ADD TWO NUMBERS FROM SPECIFIC SIMILAR DATA TYPE */
int Sum1(int num1, int num2)
{
    return num1 + num2 ;
}

/** FUNCTION NO.2 ADD TWO NUMBERS FROM THE SAME DATA TYPES
    WITHOUT ANY CONSIDERATION TO THE DATA TYPES             */
template<class type1>
type1 Sum2(type1 num1, type1 num2)
{
    return num1 + num2 ;
}

/** FUNCTION NO.3 ADD TWO NUMBERS FROM DIFFERENT DATA TYPES */
template<class type1, class type2>
type1 Sum3(type1 num1, type2 num2)
{
    return num1 + num2 ;
}

int main()
{
    /** DEFINE TWO NUMBERS FROM DIFFERENT DATA TYPES */
    int a    = 10 ;
    double b = 20.4 ;

    /** DISPLAY THE SUM WITH THE THREE FUNCTIONS */
    cout << Sum1(a, b)<< endl;

    //cout << Sum2(a, b)<< endl; /** ERROR BECAUSE THE TYPES ARE DIFFERENT */

    cout << Sum3<double>(a, b)<< endl;/** TAKE CARE OF NUMBERS ARRANGEMENT OR USE <double> */
    return 0;
}
