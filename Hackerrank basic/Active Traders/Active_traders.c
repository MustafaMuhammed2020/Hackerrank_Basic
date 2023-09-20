/*********************************************************/
/** Author : Mustafa Mohammed                           **/
/** Date   : 19 Sep 2023                                **/
/** Hint   : Active traders problem (Hackerrank basic)  **/
/*********************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*********************************************************************
/* function takes array of strings and return the most
/* repeated strings which repeated at least more than 5% 
/* function parameters :
/* [in]  array of strings
/* [in]  array count (size)
/* [out] result count (size of returned array)
/* [out] array of most repeated strings
/*********************************************************************/
char **MostRepeated( char ** Customers , int CustomersCount , int * ResultCount )
{
    int Mostrepeated = 0 , RepeatedPercent = 0 , iterator1 = 0 , iterator2 = 0 , Occurance = 0 , counter = 0 , found = 0 ;
    
    char **RetArr = (char **)malloc(CustomersCount * sizeof(char*)) ; /** dynamic memory allocation for the needed size **/
    
    for(iterator1 = 0 ; iterator1 < CustomersCount ; iterator1++)
    {
        for(iterator2 = iterator1+ 1 ; iterator2 < CustomersCount ; iterator2++)
        {
            if( (strcmp(Customers[iterator1] , Customers[iterator2])) == 0 ) /** compare each string with other strings **/
            {
                Occurance++ ; /** increase the occurance of string by 1 **/
            }
        }
        
        RepeatedPercent = (Occurance * 100 ) / CustomersCount  ; /** calculate occurance percentage **/
        
        if(  RepeatedPercent >= 5 ) /** check if the occurance is more than 5% **/
        {
            Mostrepeated++ ; 
            
            for(int i = 0 ; i < counter ; i++ ) 
            {
                if( strcmp(Customers[iterator1] , RetArr[i] ) == 0 ) /** check if the string is already existed previously to overcome redundancy **/
                {
                    found = 1 ; /** string found in the return array **/
                    break ;
                }                                
            }
            
            if( found == 0 ) /** store the string if it doesn't exist (new string) **/
            {
                RetArr[counter] = Customers[iterator1] ;
                counter++ ; /** update the counter **/
            }
                
        }
        
        found = 0 ;      /** reinitialize the found flag **/
        Occurance = 0 ; /** reinitialize the counter of occurance **/
    }
    
    *ResultCount = counter ; /** store the count of returned array in the passed argument **/

    
    return RetArr ; /** return the array of strings **/

}

/** testing code **/
int main(void)
{
    int y = 0 ; /** integer to be passed to the function by reference **/

    char *names[21] = { "Alpha" , "Beta" , "Zeta" , "Beta" , "Zeta" , "Zeta" , "Epsilon" , 
                        "Beta" , "Zeta" , "Beta" , "Zeta" , "Beta" , "Delta" , "Zeta"    ,
                        "Beta" , "Zeta" , "Beta" , "Zeta" , "Beta" , "Zeta" , "Beta"
                      };
                         
    char **Arr = MostRepeated(names , 21 , &y) ; /** call the function **/
    
    for( int i = 0 ; i < y ; i++)
    {
        printf("%s\n" , Arr[i]); /** print the returned strings **/
    }

}
