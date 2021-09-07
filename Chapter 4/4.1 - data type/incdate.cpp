// incdate.cpp
// The program displays a given date
// and displays the result

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int DaysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int LeapYear;

    struct DDate
    {
        int dday;
        int mmonth;
        int yyear;
    };

    DDate ddate1, ddate2;

    // enter a base date
    cout << "Enter date (integer): ";
    cin >> ddate1.dday;
    cout << "Enter month (integer): ";
    cin >> ddate1.mmonth;
    cout << "Enter year (integer): ";
    cin >> ddate1.yyear;

    // calculate the next date
    if ((ddate1.yyear % 4) == 0)
        LeapYear = true;
    ddate2.dday = ddate1.dday + 1;

    if ((LeapYear) & (ddate1.dday == 29) && (ddate1.mmonth == 2))
    {
        ddate2.dday = 1;
        ddate2.mmonth = 3;
        ddate2.yyear = ddate1.yyear;
    }
    else if ((LeapYear) && (ddate1.dday == 28) && (ddate1.mmonth == 2))
    {
        ddate2.dday = 29;
        ddate2.mmonth = 2;
        ddate2.yyear = ddate1.yyear;
    }
    else if (ddate2.dday > DaysInMonth[ddate1.mmonth - 1])
    {
        ddate2.mmonth = ddate1.mmonth + 1;
        ddate2.dday = 1;
    }
    else
    {
        ddate2.mmonth = ddate1.mmonth;
    }
    if (ddate2.mmonth == 13)
    {
        ddate2.mmonth = 1;
        ddate2.yyear = ddate1.yyear + 1;
    }
    else
    {
        ddate2.yyear = ddate1.yyear;
    }

    // display the result
    cout << "The next date after " << ddate1.dday << "/" << ddate1.mmonth;
    cout << "/" << ddate1.yyear << " is " << ddate2.dday << "/" << ddate2.mmonth;
    cout << "/" << ddate2.yyear << endl;

    system("pause");
    return 0;
}