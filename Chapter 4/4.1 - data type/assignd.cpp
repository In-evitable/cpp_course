// assaignd.cpp
// the program increments a given date
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

int main()
{
    DDate ddate1, ddate2;

    // enter a base date
    ddate1 = GetDate();
    // copy ddate1 to ddate2
    ddate2 = ddate1;
    // display the result
    cout << "The first date is ";
    DisplayDate(ddate1);
    cout << endl
         << "The second date is ";
    DisplayDate(ddate2);
    cout << endl;

    system("pause");
    return 0;
}

// GetDate function gets the date into a DDate variable