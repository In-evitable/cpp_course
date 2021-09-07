// func.cpp - program to dempnstrate a funtion in C++
#include <iostream>
using namespace std;
long multiply(long left, long right);
int main()
{
    long value1 = 0, value2 = 0;
	cout << "\nProgram to multiply two integers ";
	cout << "and display the result. " << endl;

	for (long result = 1; result != 0; /*Empty Expression*/)
	{
		value1 = value2 = result = 0;
		cout << "\nTwo zeros will end the program." << endl;
		cout << "Enter the first integer (and enter key): ";
		cin >> value1;

		cout << "Enter the second integer (and enter key): ";
		cin >> value2;

		if (value1 == 0 && value2 == 0)
			break;

		result = multiply(value1, value2);
		cout << value1 << " multiplied by ";
		cout << value2 << " = " << result << endl;
	}
	return 0;
}

// Multiplies the two arguments
// together and return the results
long multiply(long left, long right)
{
	long result = left * right;
	return(result);
}