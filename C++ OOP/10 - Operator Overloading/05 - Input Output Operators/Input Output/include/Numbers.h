/***********************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                             */
/** DATE    : 13 SEP 2021                                  */
/** VERSION : V01                                          */
/***********************************************************/
#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
using namespace std;

/** CREATE NUMBERS CLASS */
class Numbers
{
    /** PRIVATE MEMBERS */
private:
    int num1, num2 ;
    /** PUBLIC MEMBERS */
public:
    Numbers();
    Numbers(int num1, int num2);

    /** NON MEMBER FUNCTION TO TAKE OBJECT PRIVATE MEMBERS (cin>>) */
    friend istream & operator>>(istream & input, Numbers & n)
    {
        /***********************************************************/
        /*****************        HINT              ****************/
        /** friend KEY WORD IS USED TO ACCESS PRIVATE MEMBERS      */
        /** OUT OF THE CLASS SCOPE AND IT IS ALSO USED TO MODIFY   */
        /** THE SYNTAX OF BUILT IN OPERATORS SUCH AS               */
        /**         1 - ADD INTEGER TO OBJECT                      */
        /**         2 - ADD OBJECT TO INTEGER                      */
        /**         3 - >> OPERATOR (input operator)               */
        /**         4 - << OPERATOR (output operator)              */
        /***********************************************************/

        input>> n.num1 >> n.num2 ;
        return input ;
    }

    /** NON MEMBER FUNCTION TO PRINT OBJECT PRIVATE MEMBERS (cout<<) */
    friend ostream & operator<<(ostream & output, Numbers & n)
    {

        output<<"Num1 : "<<n.num1<<" , "<<"Num2 : "<<n.num2<<endl;
        return output ;
    }

    void ShowData();
    ~Numbers();
};

#endif // NUMBERS_H


