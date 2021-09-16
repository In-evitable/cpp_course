#include <iostream>
#include <vector>
#include <algorithm>
#include "phbook.h"
using namespace std;

class NameCompare:binary_function<PhBook, PhBook, bool>
{
public:
    bool operator()(const PhBook& a, const PhBook& b) {
        return (a.LessThan(b));
    }
};

int main()
{
    vector <PhBook> MyPhoneBook;

    // initialize phone book lines
    PhBook PBLine1("Smith", "Robert", "Portland, OR", "503", "2027656");
    PhBook PBLine2("Smith", "John", "Seattle, WA", "206", "7681290");
    PhBook PBLine3("Barney", "Tom", "Eugene, OR", "541", "7682322");
    PhBook PBLine4("Anderson", "Peter", "San Diego, CA", "619", "5451551");
    PhBook PBLine5("Smith", "John", "New York, NY", "212", "12334567");

    // set up vector values
    MyPhoneBook.push_back(PBLine1);
    MyPhoneBook.push_back(PBLine2);
    MyPhoneBook.push_back(PBLine3);
    MyPhoneBook.push_back(PBLine4);
    MyPhoneBook.push_back(PBLine5);

    // sort the vector
    /* sort(MyPhoneBook.begin(), MyPhoneBook.end()); */
    sort(MyPhoneBook.begin(), MyPhoneBook.end(), NameCompare());

    // display the vector after sorting
    vector <PhBook>::iterator i;
    for (i = MyPhoneBook.begin(); i != MyPhoneBook.end(); ++i)
        i->DisplayPhone();

    return 0;
}