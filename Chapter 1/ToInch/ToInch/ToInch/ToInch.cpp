// toinch.cpp - converts feet to inches
#include <iostream>
using namespace std;
const int inchesInFoot = 12;
int main()
{
	int numberOfFeet = 0;

	cout << "Please enter the number of feet, ";
	cout << "I will tell you the number of inches" << endl;
	cin >> numberOfFeet;

	int numberOfInches = numberOfFeet * inchesInFoot;
	cout << numberOfInches << " inches are in ";
	cout << numberOfFeet << " feet" << endl;
	return(0);
}