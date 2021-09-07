// none_oop version
#include <iostream>
using namespace std;

bool Equal(char alpha, char beta);
char GetLetter(void);
void Result(bool b);

int main()
{
	char first;
	char second;
	bool tested;

	first = GetLetter();
	second = GetLetter();
	tested = Equal(first, second);
	Result(tested);

	return 0;
}

bool Equal(char alpha, char beta)
{
	if (alpha == beta)
		return true;
	else
		return false;
}

char GetLetter(void)
{
	char letter;

	cout << "Enter the letter: ";
	cin >> letter;
	return(letter);
}

void Result(bool b)
{
	if (b == true)
		cout << "Letters are the same";
	else
		cout << "Letters aren't the same";
	cout << endl;
}