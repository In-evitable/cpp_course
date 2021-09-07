// class definition
// file employee.cpp

#include <iostream>
#include <string.h>
#include "employee.h"

using namespace std;

Employee::Employee(void)
{
    memset(LastName, 0x00, strlen(FirstName));
    memset(LastName, 0x00, strlen(LastName));
}

Employee::~Employee(void) {}

void Employee::DisplayEmployee(void)
{
    cout << FirstName << " " << LastName << endl;
    cout << "Date of Birth: " << BirthDate.dday;
    cout << "/" << BirthDate.mmonth << "/" << BirthDate.yyear;
    cout << endl;
}

void Employee::SetEmployee(void)
{
    char bdString[80];

    cout << "Enter First Name: ";
    cin >> FirstName;
    cout << "Enter Last Name: ";
    cin >> LastName;
    cout << "Enter Salary: ";
    cin >> salary;

    while (true)
    {
        cout << "Enter Birthdate (mm/dd/yy): ";
        cin >> bdString;
        BirthDate.dday = (bdString[3] - '0') * 10 + bdString[4] - '0';
        BirthDate.mmonth = (bdString[0] - '0') * 10 + bdString[1] - '0';
        BirthDate.yyear = (bdString[6] - '0') * 10 + bdString[7] - '0';

        if ((BirthDate.dday >= 1) && (BirthDate.dday <= 31))
            if ((BirthDate.mmonth >= 1) && (BirthDate.mmonth <= 12))
            {
                break;
            }
    }
}