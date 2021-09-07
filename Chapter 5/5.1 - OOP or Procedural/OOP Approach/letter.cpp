#include <iostream>
#include "letter.h"
using namespace std;

void LetterTest::Equal(void)
{
	if (alpha == beta)
		gamma = true;
	else
		gamma = false;
}

void LetterTest::GetLetter(void)
{
	cout << "Enter the first letter: ";
	cin >> alpha;
	cout << "Enter the second letter: ";
	cin >> beta;
}

void LetterTest::Result(void)
{
	if (gamma = true)
		cout << "Letters are the same";
	else
		cout << "Letters aren't the same";
	cout << endl;
}