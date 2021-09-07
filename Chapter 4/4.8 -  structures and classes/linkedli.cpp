// file linkedli.cpp

#include "linkedli.h"
using namespace std;

linkedlist::linkedlist() { firstelem = NULL; }

linkedlist::~linkedlist(void) {}

// add new element
void linkedlist::AddElement(int elem1)
{
    llink *newlink = new llink;
    newlink->elem = elem1;
    newlink->nextelem = firstelem;
    firstelem = newlink;
}

// display list elements 1 by one
void linkedlist::DisplayList()
{
    llink *currentelem = firstelem;
    while (currentelem != NULL)
    {
        cout << currentelem->elem << " - ";
        currentelem = currentelem->nextelem;
    }
    cout << "END";
}