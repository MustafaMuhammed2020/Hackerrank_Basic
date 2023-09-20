/*****************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                   */
/** DATE    : 22 SEP 2021                                        */
/** VERSION : V01                                                */
/*****************************************************************/

#include <iostream>
#include<fstream> /** FOR HANDLING FILES */
using namespace std;

int main()
{
    /** NAME && ID OF MEMBERS */
    char name[10] ;
    int id ;

    /** CREATE FILE OBJECT */
    ofstream my_file("Members.txt" , ios::binary);

    cout<<"Enter Name And Id\n";
    cout<<"To Quit Press CTRl+Z\n";

    /** ACCEPT NAMES AND IDs THEN COPY THEM TO FILE */
    while(cin>>name>>id)
    {
        my_file<<name<<"  "<<id<<endl;
    }

    /***********************************************/
    /** IF THE DATA IS NOT FROM TYPE CHARACTER     */
    /** USE reinterpret_cast<char*>(data) TO CAST  */
    /** DATA TO CHAR                               */
    /** WRITE TO THE FILE                          */
    /***********************************************/
    my_file.write(("That's Done\n"),11*sizeof(char));

    /** CHECK IF THE FILE IS OPENED */
    if(my_file.is_open())
        /** CLOSE THE FILE */
        my_file.close();
    else
        cout<<"File Is closed\n";

    return 0;
}
