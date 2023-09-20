/******************************************************************/
/* Author   : Mustafa Mohammed Abdou                              */
/* Date     : 2 , Mar 2023                                        */
/* Hint     : Swap two pointers                                   */
/******************************************************************/


#include <stdio.h>

/* FUNCTION PROTOTYPE / DECLERATION                         */
/* THE FUNCTIOAN TAKES TWO POINTER TO POINTER AND SWAP THEM */
void swap(int **s1 , int **s2);

int main() {
    /* DEFINE TWO POINTERS TO SWAP THEM  */
    int x = 5 , y = 10 , * ptr1 = &x , * ptr2 = &y;

    /* PRINT POINTERS BEFORE SWAPPING */
    printf("Before Swapping\n");
    printf("ptr1 points to address %p\n", ptr1);
    printf("ptr2 points to address %p\n", ptr2);
    
    /* CALL SWAP FUNCTION AND PASS THE POINTER BY POINTER */
    swap(&ptr1 , &ptr2);

    /* PRINT POINTERS AFTER SWAPPING */
    printf("\nAfter Swapping\n");   
    printf("ptr1 points to address %p\n", ptr1);
    printf("ptr2 points to address %p\n", ptr2);

    return 0;
}


/* FUNCTION DEFINITION / IMPLEMENTATION  */
void swap(int **s1 , int **s2)
{
    /* CREATE TEMP POINTER TO BE USED IN SWAPPING */
    int * temp = *s1 ;

    *s1 = *s2 ;
    *s2 = temp ;
}