// class defintion

#include "stack1.h"

// constructor

SStack::SStack(int IniLength)
{
    CurrentElement = -1;
    if (IniLength < 256)
        SStackLength = 256;
    else
        SStackLength = IniLength;
    SStackBuffer = new char[SStackLength];
}

// deconstructor
// is empty yet

SStack::~SStack(void)
{
    delete[] SStackBuffer;
}

// the IsEmpty methods determines if the stack is empty
// if yes, it returns 1 (true)
// if no, it returns 0 (false)

int SStack::IsEmpty(void)
{
    if (CurrentElement < 0)
        return 1;
    else
        return 0;
}

// the IsFull method determines if the stack is full
// if yes, it returns 1 (true)
// if no, it returns 0 (false)

int SStack::IsFull(void)
{
    if (CurrentElement >= SStackLength)
        return 1;
    else
        return 0;
}

// the Push method pushes the c character into the stack
// it returns 1 if success
// it returns 0 if failure (the stack is full)

int SStack::Push(char c)
{
    if (IsFull())
        return 0;
    *SStackBuffer++ = c;
    CurrentElement++;
    return 1;
}

// the Pop method moves the too character from the stack
// to the c character
// it returns 1 if success
// it returns 0 if failure (the stack is empty)

int SStack::Pop(char &c)
{
    if (IsEmpty())
        return 0;
    c = *--SStackBuffer;
    CurrentElement--;
    return 1;
}