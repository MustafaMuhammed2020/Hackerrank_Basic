#include<iostream>
#include<fstream> /** TO HANDLE FILES */
using namespace std;

#include<cstring>

int main ()
{
    /** CREATE STRING TO HOLD DATA FRO THE FILE */
    string file_data;

    /** OPEN THE FILE WITH ITS NAME */
    ifstream MyReadFile("MyFile.txt");

    /** GET LINE BY LINE FROM THE FILE */
    while(getline(MyReadFile, file_data))
    {
        /** OUTPUTS THE DATA FRO FILE */
        cout << file_data;
    }

    /** CLOSE THE FILE */
    MyReadFile.close();

    return 0 ;
}
