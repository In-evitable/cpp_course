#include <algorithm>
#include <string>
#include <vector>
#include "wordcompare.h"
#include <iostream>
using namespace std;

int main()
{
    vector<string> MainText;
    vector<string> TempString;

    vector<string>::iterator i;

    MainText.push_back("All");
    MainText.push_back("art");
    MainText.push_back("is");
    MainText.push_back("quite");
    MainText.push_back("useless");

    TempString.push_back("quite");
    TempString.push_back("unique");

    i = search(MainText.begin(), MainText.end(), TempString.begin(), TempString.end(), WordCompare());

    if (i == MainText.end())
        cout << "The substring is not found" << endl;
    else
        cout << "The substring is found" << endl;

    return 0;
}
