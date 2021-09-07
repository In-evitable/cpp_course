// persname.h

#include <list>
#include <string>
using namespace std;

class persname
{
private:
    list<string> PName;

public:
    persname();
    ~persname();

    // add a new name
    void Add(string NewName);

    // add a new name before an existing one
    void AddBefore(string NewName, string BeforeName);

    // sort the names in alphabetical order
    void Sort(void);

    // remove dublicate names from the sorted list
    void RemoveDuplicates(void);

    // check if the name exists in the list
    bool NameExists(string TestName);

    // count all names
    int CountNames(string TestName);

    // display all names
    void DisplayAll(void);
};