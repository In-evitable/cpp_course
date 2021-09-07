// persnam1.cpp

#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

#include "persnam1.h"

persname::persname()
{
}

persname::~persname()
{
}

// add a new name
void persname::Add(string NewName)
{
    PName.push_back(NewName);
}

// add a new name before an existing one
void persname::AddBefore(string NewName, string BeforeName)
{
    list<string>::iterator SResult;

    SResult = find(PName.begin(), PName.end(), BeforeName);
    PName.insert(SResult, NewName);
}

// sort the names in alphabetical order
void persname::Sort(void)
{
    PName.sort();
}

class SameLetter:binary_function <string, string, bool>
{
public:
    bool operator()(const string& a, const string& b) {
        if (a.at(0) == b.at(0))
            return true;
        else
            return false;
    }
};

// leaves one word per letter
void persname::RemoveA(void) {
    list <string>::iterator new_end;

    new_end = unique(PName.begin(), PName.end(), SameLetter());
    PName.erase(new_end, PName.end());
}

// remove dublicate names from the sorted list
void persname::RemoveDuplicates(void)
{
    list<string>::iterator new_end;

    new_end = unique(PName.begin(), PName.end());
    PName.erase(new_end, PName.end());
}

// check if the name exists in the list
bool persname::NameExists(string TestName)
{
    list<string>::iterator SResult;

    SResult = find(PName.begin(), PName.end(), TestName);
    if (SResult == PName.end())
        return false;
    return true;
}

// count all names
int persname::CountNames(string TestName)
{
    return count(PName.begin(), PName.end(), TestName);
}

// find the first name that starts with 'J'
string persname::FindNameJ(void) {
    list <string>::iterator i;


    return *(find_if(PName.begin(), PName.end(), bind2nd(greater<string>(), "IZZZ")));
}

// count names that start with 'A' to 'L'
int persname::CountNamesAL(void) {
    return count_if(PName.begin(), PName.end(), bind2nd(less<string>(), "M"));
}

// display all names
void persname::DisplayAll(void)
{
    list<string>::iterator i;

    for (i = PName.begin(); i != PName.end(); i++)
        cout << *i << endl;
}