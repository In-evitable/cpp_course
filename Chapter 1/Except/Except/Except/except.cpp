// except.cpp - program to demonstrate the 
// use of exception handling in C++
#include <iostream>
#include <new>
#include <fstream>
#include <string>

static void acquireMemory(int elements);
static void calculate(int value) throw(int);
static void noThrow(void) throw();

const int MAX_ITERATIONS = 20;
const int MAX_ELEMENTS = 30000;

struct LargeStruct {
	double bigd1[MAX_ELEMENTS];
	double bigd2[MAX_ELEMENTS];
	double bigd3[MAX_ELEMENTS];
	double bigd4[MAX_ELEMENTS];
};

int errorCode = 0;

int main() {
	int numerator = 10;
	int divisor = 0;
	int result = 0;

	try {
		result = numerator / divisor;
		std::cout << "\nEnxpression succeeded!" << std::endl;
	}
	catch (...) {
		std::cout << "\nDivide-by-zero exception!" << std::endl;
	}

	try {
		for (divisor = 10; divisor >= 0; divisor--) {
			result = numerator / divisor;
			std::cout << numerator << '/' << divisor;
			std::cout << " == " << result << std::endl;
		}
	}
	catch (...) {
		std::cout << "for() divide-by-zero exception!" << std::endl;
	}
	
	try {
		acquireMemory(30000);
	}
	catch(std::string s){
		std::cout << s << std::endl;
	}
	catch (...) {
		std::cout << "Exception thrown for ";
		std::cout << "acquireMemort()" << std::endl;
	}

	try {
		for (int i = 1; i >= 0; i--) {
			calculate(i);
			std::cout << "calculate(" << i;
			std::cout << ") succeeded" << std::endl;
		}
	}
	catch (int ec) {
		std::cout << "exception for calulate()" << std::endl;
	}

	return(0);
}

void acquireMemory(int elements) {
	long cnt = elements * MAX_ELEMENTS;
	LargeStruct* s = (LargeStruct*)0;

	try {
		s = new LargeStruct[cnt];
	}
	catch (std::bad_alloc e) {
		std::cout << "Caught bad_alloc" << std::endl;
	}
	catch (...) {
		std::cout << " allocation exception " << std::endl;
		throw;
	}

	if (s == (LargeStruct*)0)
		throw std::string("s is null in aquireMemory");
	else
		delete[] s;
}
 
void calculate(int value) {
	if (value == 0) {
		errorCode = 1;
		throw errorCode;
	}
}