/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 22 SEP 2021                                        */
/** VERSION : V01                                                */
/*****************************************************************/

#define Negative_Error     1
#define Out_Range_Error    2

#include <iostream>
using namespace std;

int main()
{
    /** ARRAY OF NUMBERS */
    int Arr[10] = {100 , 200 , 300 , 400 , 500 , 600 , 700 , 800 , 900 , 1000};
    int index ;

    /** HINT FOR cin EXCEPTIONS */
    cin.exceptions(cin.failbit);

    try
    {
        /** RECEIVE THE IDEX */
        cout<<"Enter The Index\n";
        cin>>index;

        if(index < 0)
            throw Negative_Error;

        if(index >= 10)
            throw Out_Range_Error;

        /** IN CASE OF NO EXCEPTIONS PRINT THE NUMBER */
        cout<<"The Number In Index "<<index<<" Is  "<<Arr[index];
    }
    catch(int error)
    {
        if(error == 1)
            cout<<"Error : Negative Index\n";

        else if(error == 2)
            cout<<"Entered Index Is Out Of Range\n";

    }
    return 0;
}
