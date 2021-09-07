// file listtest.cpp

#include "linkedli.h"

int main()
{
    linkedlist TestList;

    TestList.AddElement(5);
    TestList.AddElement(54);
    TestList.AddElement(3);
    TestList.AddElement(25);

    TestList.DisplayList();

    return 0;
}