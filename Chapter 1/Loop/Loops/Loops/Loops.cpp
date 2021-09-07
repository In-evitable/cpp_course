// loop.cpp - program to demonstrate C++ loops
#include <iostream>
using namespace std;
int main()
{
	int value = 0;

	cout << "Beginning of while loop" << endl;
	while (value < 5)
	{
		cout << "The value of value is: " << value << endl;
		++value;
	}
	cout << "End of while loop" << endl;

	cout << "\nBeginning of do-while loop" << endl;
	do {
		cout << "The value of value is: " << value << endl;
	} while (value < 5);
	cout << "End of do-while loop" << endl;

	cout << "\nBeginnning of for loop" << endl;
	for (value = 0; value < 5; value++)
	{
		cout << "The value of value is: " << value << endl;
	}
	cout << "End of for loop" << endl;

	return(0);
}