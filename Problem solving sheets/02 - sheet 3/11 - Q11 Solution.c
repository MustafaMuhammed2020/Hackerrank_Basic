/***************************************************/
/* Author   : Mustafa Mohammed Abdou               */
/* Date     : 12 Feb, 2023                         */
/* Version  : V01                                  */
/* Hint     : remove repeated elements in array    */
/***************************************************/
#include<stdio.h>
#include<stdlib.h> /* TO USE malloc()  */

/* FUNCTION PROTOTYPE / DECLERATION */
/* THE FUNCTION TAKES AN ARRAY AND RETURN AN ARRAY */
int * IntRemoveRepeated(int *CopyIntArray , int CopyIntAraySize , int * IntReturnSize );



int main()
{
    /* CREATEARRAY FOR TESTING */
  int Arr[] = {0,1,2,0,1,5,6,5,8,8,3,4};
  int * NewArr , x ; /* ARRAY TO HOLD THE RETURNED ARRAY FROM THE FUNCTION  x IS A VARIABLE TO HOLD THE SIZE OF RETURNED ARRAY */
  
  /* CALCULATE THE SIZE OF ARRAY TO BE PASSED TO THE FUNCTION */
  int Size = sizeof(Arr)/sizeof(Arr[0]);

  /* CALL THE FUNCTION */
  NewArr = IntRemoveRepeated(Arr , Size , &x);
  
  /* PRINT THE ARRAY ELEMENTS */
  for(int y = 0 ; y < x ; y++)
   {
     printf("%d \t", NewArr[y]);
   }

   return 0 ;
}

/* FUNCTION IMPLEMENTATION / DEFINITION */
int * IntRemoveRepeated(int *CopyIntArray , int CopyIntAraySize , int * IntReturnSize)
{
/* THIS VALUE WILL TAKES THE PLACE OF ANY REMOVED / REPEATED ELEMENT  */
/* AND BECAUSE THE ARRAY IS SORTED SO THIS VALUE WILL BE DISTIGUISHED */
int LocalIntRemoval = CopyIntArray[0] - 1 ;

/* LOCAL COUNTER TO COUNT THE REMOVED ELEMENTS AND COUNTER
   FOR THE NEW ARRAY OF NON REPEATED ELEMENTS               */
int LocalIntCounter = CopyIntAraySize , IntNonRepeatedCounter = 0 ; 
 
/* COMPARE EACH ELEMENT WITH OTHERELEMENTS TO SEE IF THE ELEMENT
   REPEATED OR NOT                                                  */
for(int i = 0 ; i < CopyIntAraySize ; i++) /** O( n square) **/
 {
   for(int x = i+1 ; x < CopyIntAraySize ; x++)
    {
       /* IF REPEATED ELEMENT FOUND REPLACE IT WITH REMOVAL NON REPEATED
          VALUE */
       if(CopyIntArray[i] == CopyIntArray[x] && CopyIntArray[i] != LocalIntRemoval)
        {
           CopyIntArray[x] = LocalIntRemoval ;
           LocalIntCounter--;  /* DECREASE THE LOCAL COUNTER */
        }
    }
 }            

/* STORE THE SIZE OF NON REPEATED ARRAY */
* IntReturnSize = LocalIntCounter ;

/* DYNAMICALLY CREATE ARRAY FOR NOT REPEATED ELEMENTS 
   THE ARRAY TAKES ITS SIZE AS (PASSED ARRAY SIZE - REPEATED ELEMENTS COUNTER */
int * IntNonRepeated = (int *) malloc(LocalIntCounter * sizeof(int));

/* STORE THE NON REPEATED ELEMENTS IN THE PRE DEFINED ARRAY */
for(int n = 0 ; n < CopyIntAraySize; n++)
{ 
    /* IF THE REMOVAL VALUE DETECTED DON'T INVOLVE IT */
  if(CopyIntArray[n] != LocalIntRemoval)
   {
     IntNonRepeated[IntNonRepeatedCounter++] = CopyIntArray[n] ;
   }
}

return IntNonRepeated ; /* RETURN THE ARRAY */
}


/******************************************************************************

                            More optimized algorithm 
                          Code complexity is O(n) Instead .
						  
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int * RemoveRepeated(int * Arr1 , int Size , int * Mark )
{
    int Iterator = 0 , Member = 0 , Iterator2 = 0 , *NewArr = NULL , NewLenCounter = 0;
    
    NewArr = (int *) malloc( Size * sizeof(int));
     
    if( Arr1[0] > Arr1[Size-1] ) /** DEFINE A TERMINATOR MEMBER GREATER THAN THE MAX NUMBER INSIDE THE ARRAY **/
    {                                 
        Member = Arr1[0] + 1 ;
    }
    else
    {
        Member = Arr1[Size-1] + 1 ;
    }
    
   
    for(Iterator = 0 ; Iterator < Size ; Iterator++) /** O(n) **/
    {
            if( Arr1[Iterator] == Arr1[Iterator + 1]  ) /** REPEATED MEMBER FOUND **/
            {
				/** DO NOTHING **/
            }
            else
            {
                NewArr[NewLenCounter] = Arr1[Iterator]; /** STORE THE NOT REPEATED ELEMENT **/
                NewLenCounter++ ;
            }
    }
    
    NewArr[NewLenCounter] = Member ; /** ASSIGN THE LAST ELEMENT TO TERMINATOR VALUE **/
     
    *Mark = Member ; /** PASS THE TERMINATOR BACK TO CODE USER **/
    
    return NewArr ; /** RETURN THE NEW ARRAY **/
}



int main()
{
    int Array1[] = {1,2,3,4,4,4,5,6,7,7,8,8,8};

    
    int Terminator = 0 , *Merge = NULL ;
    
    Merge = RemoveRepeated(Array1 , 13 , &Terminator );
    
    for(int i = 0 ; Merge[i] != Terminator ; i++)
    {
        printf("%d\t",Merge[i]);
    }
    

    return 0;
}
