// this is the program to test
// persname class
// pntest.cpp

#include <iostream>
#include "persname.h"

using namespace std;

int main()
{
    persname Names;

    Names.Add("Andrew");
    Names.Add("Peter");
    Names.Add("Martin");
    Names.Add("Andrew");
    Names.Add("Andrew");
    Names.Add("Margaret");

    Names.Sort();
    Names.DisplayAll();
    cout << endl;

    cout << "There are " << Names.CountNames("Andrew") << " Andrews in the list" << endl;
    Names.RemoveDuplicates();
    cout << endl;

    Names.AddBefore("James", "Margaret");
    Names.DisplayAll();
    cout << endl;

    if (Names.NameExists("Peter"))
        cout << "Peter" << endl;
    if (Names.NameExists("peter"))
        cout << "peter" << endl;

    return 0;
}