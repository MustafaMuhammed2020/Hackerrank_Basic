/***************************************************/
/** AUTHOR   : MUSTAFA MUHAMMED                    */
/** DATE     : 15 SEP 2021                         */
/** VERSION  : V01                                 */
/***************************************************/

#include"University.h"

int main()
{
    /** CREATE OBJECT OF EACH CLASS */
    University M1 ;
    Student S1(1600335);
    Professor P1("Assistant", "C++");

    /** SET MEMBER DATA */
    M1.SetName("ALI");
    M1.SetAddress("Meneuf");
    M1.SetPhone("01145385509");

    /** USE INHERITANCE TO SET STUDENT DATA */
    S1.SetName("Mustafa");
    S1.SetAddress("El-Mahmoudia");
    S1.SetDepart("Control");


    /** USE INHERITANCE TO SET PROFESSOR DATA */
    P1.SetName("Khalid");
    P1.SetAddress("Cairo");

    /** DISPLAY ALL OBJECTS' DATA */
    cout<<"Member Data \n";
    M1.GetData();
    cout<<"\n\n";

    cout<<"Student Data \n";
    S1.GetStudentData();
    cout<<"\n\n";

    cout<<"Professor Data \n";
    P1.GetProfessorData();

    return 0;
}
