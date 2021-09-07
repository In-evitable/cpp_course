// ddatetest.cpp

#include <iostream>
using namespace std;

#include "ddate.h"

int main()
{
    DDate Date1, Date2, Date3;
    Date1.SetDate(15, 06, 2021);
    Date2.SetDate(15, 06, 2021);
    Date3.SetDate(15, 01, 2021);

    cout << "The first date ";
    if (Date1 > Date2)
        cout << "is ";
    else
        cout << "is not ";
    cout << "greater than the second date" << endl;

    cout << "The first date ";
    if (Date1 == Date2)
        cout << "is ";
    else
        cout << "is not ";
    cout << "equal to the second date" << endl;

    cout << "The first date ";
    if (Date1 < Date3)
        cout << "is ";
    else
        cout << "is not ";
    cout << "less than the third date" << endl;

    system("pause");
    return 0;
}