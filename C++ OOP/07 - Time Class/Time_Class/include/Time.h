/**************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                */
/** DATE    : 9 SEP 2021                                      */
/** VERSION : V01                                             */
/**************************************************************/
#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

/** CREATE TIME CLASS */
class Time
{
    /** PRIVATE MEMBERS */
    private:
        unsigned int hour ;
        unsigned int minute ;
        unsigned int second ;
    /** PUBLIC GETTERS , SETTERS , CONSTRUCTORS */
    public:
        Time();
        Time(unsigned int H ,unsigned int M ,unsigned int S);
        void SetHour(unsigned int H);
        void SetMinute(unsigned int M);
        void SetSecond(unsigned int S);
        unsigned int GetHour();
        unsigned int GetMinute();
        unsigned int GetSecond();
        void GetNextSecond();
        void print();
        ~Time();
};

#endif // TIME_H
