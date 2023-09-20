/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/** TYPEDEFINITION TO RETURN ERRORS **/
typedef enum { STACK_IS_FULL = 0 , STACK_IS_EMPTY = 1 , ALLOCATION_FAILURE = 2 , STACK_SUCCESS = 3 } EN_stackerror_t ;

/** stack struct **/
typedef struct
{
    int * Stack_Arr  ; /** for Dynamic allocation **/
    int   Stack_Ptr  ; /** private pointer for each stack **/
    int   Stack_size ; /** size of the stack **/

}Stack_t ;


/** function to initialize stack with different sizes **/
EN_stackerror_t Stack_init(Stack_t * S , int Size )
{
	EN_stackerror_t en_Stackinit_errorstatus = STACK_SUCCESS ; /** local variable to return the function status **/
	
    S->Stack_Arr = (int *)malloc(Size * sizeof(int));
	
	if( S->Stack_Arr == NULL ) /** allocation failure **/
	{
		en_Stackinit_errorstatus = ALLOCATION_FAILURE ; 
	}
	else /** allocation succeeded **/
	{
		S->Stack_Ptr = -1 ;
    
		S->Stack_size = Size ;
	}
    
    return en_Stackinit_errorstatus ; /** return the function status **/
}


/** push operation **/
EN_stackerror_t Push(Stack_t * Local_stack , int Data)
{
	EN_stackerror_t en_StackPush_errorstatus = STACK_SUCCESS ; /** local variable to return the function status **/
	
    /** check if stack is full **/
    if( Local_stack->Stack_Ptr == (Local_stack->Stack_size - 1) )
    {
		en_StackPush_errorstatus = STACK_IS_FULL ;
		
        printf("No Free Space To Push\n");
    }
    else
    {
        printf("Free Space To Push\n");
        
        Local_stack->Stack_Ptr++ ; /** increment top **/
        
        Local_stack->Stack_Arr[Local_stack->Stack_Ptr] = Data ; /** store data **/
    }
	
	return en_StackPush_errorstatus ; /** return the function status **/
    
}

/** pop operation **/
EN_stackerror_t pop( Stack_t * Stack , int * data)
{
	EN_stackerror_t en_Stackpop_errorstatus = STACK_SUCCESS ; /** local variable to return the function status **/
	
    /** checkif stack is empty **/
    if( Stack->Stack_Ptr == -1 )
    {
		en_Stackpop_errorstatus = STACK_IS_EMPTY ;
		
        printf("No Data to pop\n");
    }
    else
    {
        *data = Stack->Stack_Arr[Stack->Stack_Ptr]; /** retreive data **/
        
        Stack->Stack_Ptr-- ; /** decrement stack top **/
    }
	
	return en_Stackpop_errorstatus ; /** return the function status **/
}

/** main driver **/
int main()
{
    Stack_t S1 ;      /** create two stacks **/
    Stack_t S2 ;
    int data = 0 ;
   
    Stack_init(&S1 , 6); /** two stacks initialization with different sizes **/
    Stack_init(&S2 , 5);
   
   
   pop(&S1 , &data); /** try to pop from empty stack **/
    
    Push(&S1 , 10);
    Push(&S1 , 10);
    Push(&S1 , 10);
    Push(&S1 , 10);
    Push(&S1 , 10);
    Push(&S1 , 10);
    
    Push(&S1 , 10); /** exceeds max stack size **/
    Push(&S1 , 10);
    Push(&S1 , 10);
    
    pop(&S1 , &data); /** valid pop **/
    
    Push(&S2 , 10);
    Push(&S2 , 10);
    Push(&S2 , 10);
    Push(&S2 , 10);
    
    pop(&S2 , &data); /** valid pop **/

    printf("Hello World");

    return 0;
}
