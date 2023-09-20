/************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                              */
/** DATE    : 10 SEP 2021                                   */
/** VERSION : V01                                           */
/************************************************************/
#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>
using namespace std;

#include<cstring>

class Books
{
private:
    char book_name[10];
    char book_author[10];
    short int price ;
public :
    Books();
    Books(char n[] , char a[] , short int p);
    void GetBooks();
    ~Books();

};

#endif // BOOKS_H
