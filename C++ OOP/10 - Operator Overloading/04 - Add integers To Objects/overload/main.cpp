/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/

/** INCLUDE NUMBERS CLASS */
#include"Numbers.h"

/****************************************************************/
/*****************            HINT          *********************/
/** IF YOU TRIED TO IMPLEMENT THE NEXT FUNCTIONS AS             */
/** NOT FRIEN(MEMBER FUNCTION) YOU WILL GAIN COMPILATION        */
/** ERROR BECAUSE operator+ MUST HAS ONLY ONE ARGUMENT(OBJECT)  */
/** SO THEY MUST BE IMPLEMENTED AS FRIEND(NON MEMBER) FUNCTIONS */
/****************************************************************/

/** FREIND FUNCTION TO ADD OBJECT TO INTEGER */
Numbers operator+(Numbers num1, int x)
{
    Numbers Temp ;
    Temp.x = num1.x + x ;
    Temp.y = num1.y + x ;
    return Temp ;
}

/** FRIEND FUNCTION TO ADD INTEGER TO OBJECT */
Numbers operator+(int n, Numbers num)
{
    Numbers Temp ;
    Temp.x = num.x + n ;
    Temp.y = num.y + n ;
    return Temp ;
}


int main()
{
    /** CREATE THREE OBJECTS */
    Numbers N1(12 , 12) , N2 , N3;
    /** FORM 1 OF ADDITION */
    N2 = 2 + N1 ; /// CALL operator+(int n , Numbers num);
    /** FORM 2 OF ADDITION */
    N3 = N1 + 2 ;/// CALL operator+(Numbers num1 , int x);

    /** SHOW RESULTS OF BOTH OPERATIONS */
    N2.ShowData();
    N3.ShowData();

    return 0;
}

