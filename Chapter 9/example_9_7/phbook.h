// PhBook.h - this is a header file with
// declaration of PhBook class

#include <string>
using namespace std;

class PhBook
{
public:
    PhBook(); // default constructor
    PhBook(string InLastName, string InFirstName, string InCity, string InAreaCode, string InPhone);
    ~PhBook();

    // often used comparison operators
    bool operator==(const PhBook) const;
    bool operator>(const PhBook) const;
    bool operator<(const PhBook) const;

    // seldom used comparison functions
    bool Equal(const PhBook) const;
    bool GreaterThan(const PhBook) const;
    bool LessThan(const PhBook) const;

    // display functions
    void DisplayPhone() const;
    void DisplayCity() const;

private:
    string LastName;
    string FirstName;
    string City;
    string AreaCode;
    string Phone;
};