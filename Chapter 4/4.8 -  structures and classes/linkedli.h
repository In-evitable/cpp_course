// file linkedli.h

#include <iostream>

// list elements
struct llink
{
    int elem;
    llink *nextelem;
};

// linked list
class linkedlist
{
private:
    llink *firstelem;

public:
    linkedlist(void);
    ~linkedlist(void);

    void AddElement(int elem1);
    void DisplayList(void);
};
