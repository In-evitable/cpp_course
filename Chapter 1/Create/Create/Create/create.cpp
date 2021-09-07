// create.cpp - program to demonstrate the
// allocating and deallocating of memory in C++
#include <iostream>
using namespace std;

struct values {
	long value1;
	long value2;
};
const int MAX_ELEMENTS = 20;

int main() {
	int* intArray;
	intArray = new int[MAX_ELEMENTS];
	int i = 0;

	for (i = 0; i < MAX_ELEMENTS; i++)
		intArray[i] = i;

	for (i = 0; i < MAX_ELEMENTS; i++)
		cout << "intArray[i] = " << intArray[i] << endl;

	delete[] intArray;

	values* sArray = new values[MAX_ELEMENTS];

	for (i = 0; i < MAX_ELEMENTS; i++) {
		sArray[i].value1 = i;
		sArray[i].value2 = i * 10;
	}

	for (i = 0; i < MAX_ELEMENTS; i++) {
		cout << "sArray[i].value1 = " << sArray[i].value1;
		cout << ", sArray[i].value2 = " << sArray[i].value2 << endl;
	}

	delete[] sArray;

	return 0;
}