// this is the program to test
// persname class
// pntest.cpp

#include <iostream>
#include "persnam1.h"

using namespace std;

int main()
{
    persname Names;

    Names.Add("Andrew");
    Names.Add("Peter");
    Names.Add("John");
    Names.Add("Andrew");
    Names.Add("Andrew");
    Names.Add("Margaret");

    Names.Sort();
    Names.DisplayAll();
    cout << endl;

    cout << "There are " << Names.CountNamesAL() << " names starting from A to L" << endl;

    cout << "The first starting with J is " << Names.FindNameJ() << endl;

    Names.RemoveA();
    Names.DisplayAll();

    return 0;
}