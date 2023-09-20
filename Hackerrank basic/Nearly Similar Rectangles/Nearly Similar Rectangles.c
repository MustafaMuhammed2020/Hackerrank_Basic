/********************************************************************/
/** Author : Mustafa Mohammed                                      **/
/** Date   : 20 Sep 2023                                           **/
/** Hint   : Nearly similar rectangles problem (Hackerrank basic)  **/
/********************************************************************/

#include <stdio.h>
#include <stdlib.h>

/********************************************************************************************
/* function takes 2D array of integers describes sides of rectangles and
/* number of rows sides and columns sides and returns number of nearly similar rectangles
/* where [a/c] = [b/d] respectively to their arrangement in the passed 2D array
/* function parameters :
/* [in]  2D array of integers
/* [in]  rows count 
/* [in]  columns count 
/* [out] the number of nearly similar rectangles
/* Complexity O(n2)
/********************************************************************************************/
int CountSimilarRectangles( int **Sides , int SidesRows , int SidesColumns)
{
    int SimilarRec = 0 , Iterator = 0 , Iterator2 = 0 ;


    for( Iterator = 0 ; Iterator < SidesRows ; Iterator++ ) /** loop over all the 2D array elements **/
    {
        for (Iterator2 = Iterator+1 ; Iterator2 < SidesRows ; Iterator2++) 
        {
            /***************************************************************************************************
                in this condition there is a fixed positions 0 , 1 which represents the column0 and column1 
                and variable positions which represents the row counter and the current compared element     
            ****************************************************************************************************/
           
            if( (Sides[Iterator][0] * Sides[Iterator2][1]) == (Sides[Iterator][1] * Sides[Iterator2][0]) )
            {
                SimilarRec++ ;
            }
        
        }

    }

    return SimilarRec ;
}

/** testing code **/
int main(void)
{
    /** 2D Array to test the function **/
    int Arr[3][2] = { {4  ,8}  ,
                      {15 ,30} , 
                      {25 ,50} 
                    };

    int RetVal = CountSimilarRectangles(Arr , 3, 2); /** call the function **/

    printf("%d\n" , RetVal); /** print the return value **/



    return 0 ;
}