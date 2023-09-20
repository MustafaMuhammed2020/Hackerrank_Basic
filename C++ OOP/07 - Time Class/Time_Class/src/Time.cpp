/**************************************************************/
/** AUTHOR  : MUSTAFA MUHAMMED                                */
/** DATE    : 9 SEP 2021                                      */
/** VERSION : V01                                             */
/**************************************************************/
#include "Time.h"

/** EMPTY CONSTRUCTOR */
Time::Time()
{
  hour   = 00 ;
  minute = 00 ;
  second = 00 ;
}
/** PARAMETERIZED CONSTRUCTOR */
Time::Time(unsigned int H ,unsigned int M ,unsigned int S)
{
  hour  = H ;
  minute = M ;
  second = S ;
}
/** public setters , getters implementation */
void Time::SetHour(unsigned int H)
{
    hour = H ;
}
void Time::SetMinute(unsigned int M)
{
    minute = M ;
}
void Time::SetSecond(unsigned int S)
{
    second = S ;
}
unsigned int Time::GetHour()
{
    return hour ;
}
unsigned int Time::GetMinute()
{
    return minute ;
}
unsigned int Time::GetSecond()
{
    return second ;
}
void Time::GetNextSecond()
{
    if(hour<24 && second < 59 )
    {
        second++;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    else if(hour<24 && second == 59 && minute < 59)
    {
        second = 00 ;
        minute++;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }

    else if(hour == 23 && minute == 59 && second == 59)
    {
        second = 00;
        minute = 00 ;
        hour = 01;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    else if(hour < 23 && minute == 59 && second == 59)
    {
        second = 00;
        minute = 00 ;
        hour++;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }

}


void Time::print()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Time::~Time()
{
    cout<<"Object Deleted"<<endl;
}
