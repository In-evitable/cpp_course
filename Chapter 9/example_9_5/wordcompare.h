#include <functional>
#include <iostream>
using namespace std;

class WordCompare:binary_function <string, string, bool>
{
public:
    bool operator()(const string& a, const string& b) {
        if (a.at(0) == b.at(0))
            return true;
        else
            return false;
    }
};