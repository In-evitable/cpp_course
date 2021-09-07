// ddate.cpp

#include "ddate.h"

DDate::DDate(void) {}

DDate::~DDate(void) {}

// creates a new DDate object
// for the specified day, month, and year
void DDate::SetDate(int InDay, int InMonth, int InYear)
{
    dday = InDay;
    mmonth = InMonth;
    yyear = InYear;
}

// overloaded operator >
bool DDate::operator>(DDate InDDate)
{
    if (yyear > InDDate.yyear)
        return true;
    if (yyear < InDDate.yyear)
        return false;

    // years are equal
    if (mmonth > InDDate.mmonth)
        return true;
    if (mmonth < InDDate.mmonth)
        return false;

    // months are equal
    if (dday > InDDate.dday)
        return true;

    return false;
}

// overloaded operator >=
bool DDate::operator>=(DDate InDDate)
{
    if (yyear >= InDDate.yyear)
        return true;
    else
        return false;

    // years are equal
    if (mmonth >= InDDate.mmonth)
        return true;
    else
        return false;

    // months are equal
    if (dday >= InDDate.dday)
        return true;
    else
        return false;
}

// overloaded operator <
bool DDate::operator<(DDate InDDate)
{
    if (yyear < InDDate.yyear)
        return true;
    if (yyear > InDDate.yyear)
        return false;

    // years are equal
    if (mmonth < InDDate.mmonth)
        return true;
    if (mmonth > InDDate.mmonth)
        return false;

    // months are equal
    if (dday < InDDate.dday)
        return true;

    return false;
}

// overloaded operator <=
bool DDate::operator<=(DDate InDDate)
{
    if (yyear <= InDDate.yyear)
        return true;
    else
        return false;

    // years are equal
    if (mmonth <= InDDate.mmonth)
        return true;
    else
        return false;

    // months are equal
    if (dday <= InDDate.dday)
        return true;
    else
        return false;
}

// overloaded operator ==
bool DDate::operator==(DDate InDDate)
{
    if (yyear == InDDate.yyear)
        return true;
    if (yyear != InDDate.yyear)
        return false;

    // years are equal
    if (mmonth == InDDate.mmonth)
        return true;
    if (mmonth != InDDate.mmonth)
        return false;

    // months are equal
    if (dday == InDDate.dday)
        return true;

    return false;
}

// overloaded operator !=
bool DDate::operator!=(DDate InDDate)
{
    if (yyear != InDDate.yyear)
        return true;
    else
        return false;

    // years are equal
    if (mmonth != InDDate.mmonth)
        return true;
    else
        return false;

    // months are equal
    if (dday != InDDate.dday)
        return true;
    else
        return false;
}