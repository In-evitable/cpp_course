#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "hello world";
    string::const_iterator p = str.begin();

    while (p != str.end())
    {
        cout << *p << endl;
        p++;
    }

    system("pause");
}