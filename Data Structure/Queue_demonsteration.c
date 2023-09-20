/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/** typedefinition to return error status of queue functions **/
typedef enum { QUEUE_IS_FULL = 0 , QUEUE_IS_EMPTY = 1 , QUEUE_ALLOCATION_FAILURE = 2 , QUEUE_SUCCESS = 3 } EN_queueerrorstatus ;
/** queue structure **/
typedef struct
{
    int * Queue_Arr   ; /** for Dynamic allocation **/
    int   Queue_front ; /** private pointer for front of Queue **/
    int   Queue_rear  ; /** private pointer for rear  of Queue **/
    int   Queue_size  ; /** size of the Queue **/

}Queue_t ;


/** function to initialize Queue with different sizes **/
EN_queueerrorstatus Queue_init(Queue_t * Q , int Size )
{
	EN_queueerrorstatus en_qiniterrorstate = QUEUE_SUCCESS ; /** local variable to hold return error status **/ 
    
	Q->Queue_Arr = (int *)malloc(Size * sizeof(int));
    
	if( Q->Queue_Arr == NULL ) /** allocation failed  #define NULL (void *) 0  **/
	{
		en_qiniterrorstate = QUEUE_ALLOCATION_FAILURE ;
	}
	else
	{
		Q->Queue_front = -1 ;
		Q->Queue_rear  = -1 ;
		
		Q->Queue_size = Size ;
	}
	
	return en_qiniterrorstate ; /** return function error status **/
}

/** ENQueue operation **/
EN_queueerrorstatus ENQueue(Queue_t * Local_Queue , int Data)
{
	EN_queueerrorstatus en_enqueue_errorstate = QUEUE_SUCCESS ; /** local variable to hold return error status **/ 
    
    /** check if Queue is full **/
    if( Local_Queue->Queue_rear == (Local_Queue->Queue_size - 1) )
    {
		en_enqueue_errorstate = QUEUE_IS_FULL ; /** return error **/
        printf("No Free Space To ENQueue\n");
    }
    else if( (Local_Queue->Queue_rear == -1) && (Local_Queue->Queue_front == -1) ) /** enqueue the first element **/
    {
        printf("Free Space To ENQueue\n");
        
        Local_Queue->Queue_front++ ; /** increment front **/
        Local_Queue->Queue_rear++  ;    /** increment rear  **/
        
        Local_Queue->Queue_Arr[Local_Queue->Queue_rear] = Data ; /** store data in rear position **/
    }
    else /** not the first element entry **/
    {
        printf("Free Space To ENQueue\n");
        
        Local_Queue->Queue_rear++ ;    /** increment rear  **/
        
        Local_Queue->Queue_Arr[Local_Queue->Queue_rear] = Data ; /** store data in rear position **/
    }
	
	return en_enqueue_errorstate ; /** return function error status **/
}

/** DeQueue operation **/
EN_queueerrorstatus DeQueue( Queue_t * Queue , int * data)
{
	EN_queueerrorstatus en_dequeue_errorstate = QUEUE_SUCCESS ; /** local variable to hold return error status **/ 
    
    /** checkif Queue is empty **/
    if( Queue->Queue_front == -1 )
    {
		en_dequeue_errorstate = QUEUE_IS_EMPTY ; /** return error **/
        printf("No Data to DeQueue\n");
    }
    else if( Queue->Queue_front == Queue->Queue_rear ) /** last existing element **/
    {
        *data = Queue->Queue_Arr[Queue->Queue_front]; /** retreive data **/
        
        Queue->Queue_front = -1 ; /** back to initial status again **/
        Queue->Queue_rear  = -1 ; 
        
        printf("Succeed DeQueue\n");
        
    }
    else
    {
        *data = Queue->Queue_Arr[Queue->Queue_front]; /** retreive data **/
        Queue->Queue_front++ ;                        /** increment Queue front **/
        printf("Succeed DeQueue\n");
    }
	
	return en_dequeue_errorstate ; /** return function error status **/
}

/** main driver **/
int main()
{
    Queue_t Q1 ;
    Queue_t Q2 ;
    int data = 0 ;
   
    Queue_init(&Q1 , 6); /** two Queues initialization **/
    Queue_init(&Q2 , 5);
   
   
    DeQueue(&Q1 , &data); /** try to DeQueue from empty Queue **/
    
    ENQueue(&Q1 , 10);
    ENQueue(&Q1 , 10);
    ENQueue(&Q1 , 10);
    ENQueue(&Q1 , 10);

    DeQueue(&Q1 , &data); /** valid DeQueue **/
    DeQueue(&Q1 , &data); /** valid DeQueue **/
    DeQueue(&Q1 , &data); /** valid DeQueue **/
    DeQueue(&Q1 , &data); /** valid DeQueue **/

    ENQueue(&Q1 , 10);
    ENQueue(&Q1 , 10);
    
    ENQueue(&Q1 , 10); /** exceeds max Queue size **/
    ENQueue(&Q1 , 10);
    ENQueue(&Q1 , 10);
    
    DeQueue(&Q1 , &data); /** valid DeQueue **/
    
    ENQueue(&Q2 , 10);
    ENQueue(&Q2 , 10);
    ENQueue(&Q2 , 10);
    ENQueue(&Q2 , 10);
    
    DeQueue(&Q2 , &data); /** valid DeQueue **/

    printf("Hello World");

    return 0;
}
