// stack1 declaration

class SStack
{
private:
    int SStackLength;
    char *SStackBuffer;
    int CurrentElement;

public:
    SStack(int IniLength=256);
    ~SStack(void);

    // the Push method pushes the c character into the stack
    // it returns 1 if success
    // it returns 0 if failure (the stack is full)
    int Push(char c);

    // the Pop method moves the too character from the stack
    // to the c character
    // it returns 1 if success
    // it returns 0 if failure (the stack is empty)
    int Pop(char &c);

    // the IsEmpty methods determines if the stack is empty
    // if yes, it returns 1 (true)
    // if no, it returns 0 (false)
    int IsEmpty(void);

    // the IsFull method determines if the stack is full
    // if yes, it returns 1 (true)
    // if no, it returns 0 (false)
    int IsFull(void);
};