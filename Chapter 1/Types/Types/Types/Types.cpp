// types.cpp - program to demonstrate the
// advanced types used in C++
#include <iostream>
using namespace std;
void multiply(long& left, long& right, long& result);
void getValue(const char* message, long* value);

struct values {
	long value1;
	long value2;
	long result;
};
const int MAX_LEN = 20;






int main()
{
	values vals;

	cout << "\nProgram to multiply two integers ";
	cout << "and display the result." << endl;
	cout << "It will also show the contents of an array" << endl;

	vals.value1 = vals.value2 = vals.result = 1L;
	while (vals.result != 0)
	{
		vals.value1 = vals.value2 = vals.result = 0;

		cout << "\n Two zeros will end the program." << endl;

		getValue("Enter the first integer: ", &vals.value1);
		getValue("Enter the second integer: ", &vals.value2);

		if (vals.value1 == 0 && vals.value2 == 0)
			break;

		multiply(vals.value1, vals.value2, vals.result);
		cout << vals.value1 << " multiplied by ";
		cout << vals.value2 << " = " << vals.result << endl;
	}

	int iVal;
	char message[MAX_LEN + 1];

	for (iVal = 0; iVal < MAX_LEN; iVal++)
		message[iVal] = 'A' + iVal;
	message[iVal] = '\x00';

	cout << "\nContents of message[" << message << ']' << endl;

	char* pc = message;
	for (iVal = 0; iVal < MAX_LEN; iVal++, pc++)
		*pc = '\x00';

	cout << "\nContents of message[" << message << ']' << endl;

	return 0;
}

// multiply two numbers and put result in third argument
void multiply(long& left, long& right, long& result)
{
	result = left * right;
}

// display message, get value
void getValue(const char* message, long* value)
{
	cout << message;

	long result = 0;
	cin >> result;
	*value = result;
}