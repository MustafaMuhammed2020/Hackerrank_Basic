/************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                              */
/** DATE    : 10 SEP 2021                                   */
/** VERSION : V01                                           */
/************************************************************/
#include "Books.h"

/** STATIC COUNTER TO STORE BOOKS DATA */
static int Book_counter ;

/** ARRAYS TO HOLD BOOKS DATA */
char Books_names[10][10];
char Books_authors[10][10];
short int Books_prices[10];

/** EMPTY CONSTRUCTOR */
Books::Books()
{
    strcpy(book_name,"No Name");
    strcpy(book_author,"No Name");
    price = 0 ;
}

/** PARAMETERIZED CONSTRUCTOR*/
Books::Books(char n[] , char a[] , short int p)
{
    strcpy(book_name , n);
    strcpy(book_author , a);
    price = p ;
    strcpy(Books_names[Book_counter] , n);
    strcpy(Books_authors[Book_counter] , a);
    Books_prices[Book_counter] = p ;
    Book_counter++;
}

/** FUNCTION TO RETREIVE ALL BOOKS */
void Books::GetBooks()
{
    cout<<"Book Name"<<"\t\t"<<"Book Author"<<"\t\t"<<"Book Price"<<endl;
    for(int x = 0 ; x < Book_counter ; x++)
    {
        cout<<Books_names[x]<<"\t\t"<<Books_authors[x]<<"\t\t"<<Books_prices[x]<<"$\t\t"<<endl;

    }
}

Books::~Books()
{
    /** OBJECT DELETED */
}
