// incdate2.cpp
// this program increments a given date
// and displays the result

#include <iostream>
using namespace std;

struct DDate
{
    int dday;
    int mmonth;
    int yyear;
};

DDate GetDate(void);
void DisplayDate(DDate);
DDate GetNextDate(DDate);

int main()
{
    DDate ddate1, ddate2;

    // enter a base date
    ddate1 = GetDate();
    // caluclate the next date
    ddate2 = GetNextDate(ddate1);
    // display the result
    cout << "The next date after ";
    DisplayDate(ddate1);
    cout << " is ";
    DisplayDate(ddate2);
    cout << endl;

    system("pause");
    return 0;
}

// GetDate functino gets the date into
// a DDate variable
DDate GetDate(void)
{
    DDate ddate;
    cout << "Enter day (integer): ";
    cin >> ddate.dday;
    cout << "Enter month (integer): ";
    cin >> ddate.mmonth;
    cout << "Enter year (integer): ";
    cin >> ddate.yyear;

    return ddate;
}

// calculates a variable of DDate type
void DisplayDate(DDate ddate)
{
    cout << ddate.dday << "/" << ddate.mmonth << "/" << ddate.yyear;
}

// calculates the next date
DDate GetNextDate(DDate ddate)
{
    DDate ddateNext;
    int DaysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int LeapYear;
    if ((ddate.yyear % 4) == 0)
        LeapYear = true;
    ddateNext.dday = ddate.dday + 1;

    if ((LeapYear) && (ddate.dday = 29) && (ddate.mmonth == 2))
    {
        ddateNext.dday = 1;
        ddateNext.mmonth = 3;
        ddateNext.yyear = ddate.yyear;
    }
    else if ((LeapYear) && (ddate.yyear == 28) && (ddate.mmonth == 2))
    {
        ddateNext.dday = 29;
        ddateNext.mmonth = 2;
        ddateNext.yyear = ddate.yyear;
    }
    else if (ddateNext.dday > DaysInMonth[ddate.mmonth - 1])
    {
        ddateNext.mmonth = ddate.mmonth = ddate.mmonth + 1;
        ddateNext.dday = 1;
    }
    else
    {
        ddateNext.mmonth == ddate.mmonth + 1;
    }

    if (ddateNext.mmonth == 13)
    {
        ddateNext.mmonth = 1;
        ddateNext.yyear = ddate.yyear + 1;
    }
    else
        ddateNext.yyear = ddate.yyear;
    return ddateNext;
}