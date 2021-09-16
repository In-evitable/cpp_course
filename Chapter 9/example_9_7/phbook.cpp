// PhBook.cpp
// PhBook class definition

#include <iostream>
#include <string>
#include "phbook.h"
using namespace std;

PhBook::PhBook()
{
    LastName = "";
    FirstName = "";
    City = "";
    AreaCode = "";
    Phone = "";
}

PhBook::PhBook(string InLastName, string InFirstName, string InCity, string InAreaCode, string InPhone)
{
    LastName = InLastName;
    FirstName = InFirstName;
    City = InCity;
    AreaCode = InAreaCode;
    Phone = InAreaCode;
}

PhBook::~PhBook() {}

bool PhBook::operator==(const PhBook InPhBook) const
{
    if (LastName != InPhBook.LastName) return false;
    if (FirstName != InPhBook.FirstName) return false;

    return true;
}

bool PhBook::operator>(const PhBook InPhBook) const
{
    if (LastName > InPhBook.LastName) return true;
    if (LastName < InPhBook.LastName) return false;

    if (LastName == InPhBook.LastName)
    {
        if (FirstName > InPhBook.FirstName) return true;
        else return false;
    }
}

bool PhBook::operator<(const PhBook InPhBook) const
{
    if (LastName < InPhBook.LastName) return true;
    if (LastName > InPhBook.LastName) return false;

    if (LastName == InPhBook.LastName)
    {
        if (FirstName < InPhBook.FirstName) return true;
        else return false;
    }
}

bool PhBook::Equal(const PhBook InPhBook) const
{
    if (LastName != InPhBook.LastName) return false;
    if (FirstName != InPhBook.FirstName) return false;
    if (City != InPhBook.City) return false;
    if (AreaCode != InPhBook.AreaCode) return false;
    if (Phone != InPhBook.Phone) return false;

    return true;
}

bool PhBook::GreaterThan(const PhBook InPhBook) const
{
    if (LastName > InPhBook.LastName) return true;
    if (LastName < InPhBook.LastName) return false;
    if (LastName == InPhBook.LastName)
    {
        if (FirstName > InPhBook.FirstName) return true;
        if (FirstName < InPhBook.FirstName) return false;
        if (FirstName == InPhBook.FirstName)
        {
            if (City > InPhBook.City) return true;
            if (City < InPhBook.City) return false;
            if (City == InPhBook.City)
            {
                if (AreaCode > InPhBook.AreaCode) return true;
                if (AreaCode < InPhBook.AreaCode) return false;
                if (AreaCode == InPhBook.AreaCode)
                {
                    if (Phone > InPhBook.Phone) return true;
                    if (Phone < InPhBook.Phone) return false;
                    if (Phone == InPhBook.Phone) return true;
                    else return false;
                }
            }
        }
    }
    return false;
}

bool PhBook::LessThan(const PhBook InPhBook) const
{
    if (LastName < InPhBook.LastName) return true;
    if (LastName > InPhBook.LastName) return false;
    if (LastName == InPhBook.LastName)
    {
        if (FirstName < InPhBook.FirstName) return true;
        if (FirstName > InPhBook.FirstName) return false;
        if (FirstName == InPhBook.FirstName)
        {
            if (City < InPhBook.City) return true;
            if (City > InPhBook.City) return false;
            if (City == InPhBook.City)
            {
                if (AreaCode < InPhBook.AreaCode) return true;
                if (AreaCode >  InPhBook.AreaCode) return false;
                if (AreaCode == InPhBook.AreaCode)
                {
                    if (Phone < InPhBook.Phone) return true;
                    if (Phone > InPhBook.Phone) return false;
                    if (Phone == InPhBook.Phone) return true;
                    else return false;
                }
            }
        }
    }
    return false;
}

void PhBook::DisplayPhone() const
{
    string FullName, FullPhone;
    FullName = LastName + ", " + FirstName;
    FullPhone = "(" + AreaCode + ")" + Phone.substr(0, 3) + "-" + Phone.substr(3, 4);

    cout << FullName << ": " << FullPhone << endl;
}

void PhBook::DisplayCity() const
{
    string FullName;
    FullName = LastName + ", " + FirstName;

    cout << FullName << ": " << City << endl;
}