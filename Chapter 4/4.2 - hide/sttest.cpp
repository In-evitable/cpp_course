// test program for the stack class
// the program displays "Hello World!"
// in the reverse order

#include <iostream>
#include <string.h>

#include "stack.h"
using namespace std;

int main()
{
    unsigned int i;

    SStack TestStack;
    char buffer[80];
    memset(buffer, 0x00, 80);
    strcpy(buffer, "Hello World!");

    for (i = 0; i < strlen(buffer); i++)
        TestStack.Push(buffer[i]);

    i = 0;
    while (!TestStack.IsEmpty())
        TestStack.Pop(buffer[i++]);

    cout << buffer << endl;

    system("pause");
    return 0;
}