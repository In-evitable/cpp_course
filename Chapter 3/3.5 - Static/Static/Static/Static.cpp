// static.cpp - this file contains a class
// that utilizes a static member.
#include <iostream>
using namespace std;

class Base {
public:
	Base() { ++instanceCnt; }
	~Base() { --instanceCnt; }
	int count() const { return(instanceCnt); }
private:
	static int instanceCnt;
};

int Base::instanceCnt = 0;

int main() {
	Base* b[10];
	int i = 0;

	for (i = 0; i < 10; i++)
		b[i] = new Base;

	cout << "Instance count #1: " << b[0]->count() << endl;

	for (i = 0; i < 9; i++)
		delete b[i];

	cout << "Instance count #2: " << b[0]->count() << endl;
	delete b[9];

	return 0;
}