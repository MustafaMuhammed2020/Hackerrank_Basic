/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 22 SEP 2021                                        */
/** VERSION : V01                                                */
/*****************************************************************/
#include <iostream>
using namespace std;

#include<cstring>

int main()
{
    int Age ;
    /** HINT FOR THE COMPILER TO HANDLE EXCEPTIONS */
    cin.exceptions(cin.failbit);

    try
    {
        cout<<"Enter Your Age\n";
        cin>>Age;
        if(Age <= 0 || Age > 99)
            throw "Error";
        cout<<"Age Accepted\n";
    }
    /** FORBIDDEN TO WRITE AND INSTRUCTIONS BETWEEN TRY & CATCH */
    catch(...)
    {
        cout<<"Entered Age Is Not Valid\n";
    }
    return 0;
}
