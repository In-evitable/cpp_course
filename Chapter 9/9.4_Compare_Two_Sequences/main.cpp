#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> pattern;
    vector<int> inData;

    vector<int>::iterator i;

    pattern.push_back(12);
    pattern.push_back(25);
    pattern.push_back(33);
    pattern.push_back(49);

    inData.push_back(25);
    inData.push_back(33);
    inData.push_back(48);

    i = pattern.begin();
    i++;

    pair<vector<int>::iterator, vector<int>::iterator> result;
    result = mismatch(i, pattern.end(), inData.begin());

    if (equal(i, pattern.end(), inData.begin()))
        cout << "The ranges are equal" << endl;
    else
        cout << "The different values are: " <<
        *(result.first) << " and " <<
        *(result.second) << endl;

    /*

    if (equal(i, pattern.end(), inData.begin()))
        cout << "The ranges are equal" << endl;
    else
        cout << "The ranges are not equal" << endl;

    */

    return 0;
}