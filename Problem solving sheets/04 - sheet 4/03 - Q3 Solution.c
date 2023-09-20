/***********************************************************/
/* Author  : Mustafa Mohammed Abdou                        */
/* Date    : 2 , Mar 2023                                  */
/* Hint    : Reverse a sentence                            */
/***********************************************************/
#include <stdio.h>

/* FUNCTION PROTOTYPE / DECLERATION                        */
/* THE FUNCTION TAKE A STRING AND PRINT ITS WORDS REVERSED */
void VoidReverseStr(char *Copy_CharStr);

int main()
{
  /* CREATE A SETENCE STRING FOR TESTING */
  char * Str = " embedded software engineer in iti ";
  
  /* CALL THE FUNCTION */
  VoidReverseStr(Str);

  return 0 ;
}

/* FUNCTION DEFINITION  / IMPLEMENTATION  */
void VoidReverseStr(char *Copy_CharStr)
{ 
  /* DEFINE TWO VARIABLES ONE TO COUNT THE WHLE STRING AND ONE TO COUNT EACH WORD LETTERS SEPERATELY */
  int Local_IntLetters = 0 , Local_IntWordSize = 0 , i = 0 , forward = 0 , Local_IntwordSize = 0 ;

  /* FIRST COUNT THE NUMBER OF LETTERS IN THE WHOLE STRING */
  while(Copy_CharStr[i] != '\0')
  {
      Local_IntLetters++;
      i++ ;
  }

/* FOR LOOP FROM THE END OF THE SENTENCE UNTIL THE FIRST ELEMENT */
for(int x = Local_IntLetters - 1 ; x >= 0 ; x--)
{

  if(Copy_CharStr[x] != ' ')
   {
      /* JUST COUNT THE WORD LETTERS */
      Local_IntwordSize++;
   }
  /* THE NEXT STEP WILL START EXECUSION WHEN A SPACE FOUND IN THE SENTENCE */ 
  else
   {
     forward = x ; /* FORWARD TAKSE PLACE STARTING FROM THE SPACE UNTILL THE WORD ENDDED */
                   /* X MEANS THE POSISTION FROM WHICH WE WILL START                     */ 

     /* HERE WE ADD X TO THE WORD SIZE TO PRINT THE SPECIFIC WORD LETTERS */
     while(forward <= (Local_IntwordSize + x))
      {
        printf("%c",Copy_CharStr[forward]);    /* PRINT THE LETTER */
        if(forward == (Local_IntwordSize + x)) /* AT THE END OF WORD */
        Local_IntwordSize = 0 ;                /* REINITIALIZE THE WORD SIZE */
        forward++ ;    /* MAKS NO DIFFERENCE HERE BECAUSE WHILE BECOMES FALSE NOW */
        
      }
   }
}
}
