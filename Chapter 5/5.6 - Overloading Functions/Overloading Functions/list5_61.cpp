// overloaded functions

#include <iostream>
using namespace std;

int Alpha(int x, int y);
float Alpha(float x, float y);
char Alpha(char x, char y);

void Show(int result);
void Show(float result);
void Show(char result);

int main()
{
	int x, y;
	float s, t;
	char a, b;

	cout << "Enter an integer: ";
	cin >> x;
	cout << "\nEnter another integer: ";
	cin >> y;

	Show(Alpha(x, y));

	cout << "\nEnter a float: ";
	cin >> s;
	cout << "\nEnter another float: ";
	cin >> t;

	Show(Alpha(s, t));

	cout << "\nEnter a char: ";
	cin >> a;
	cout << "\nEnter another char: ";
	cin >> b;

	Show(Alpha(a, b));
}

int Alpha(int x, int y)
{
	return x * y;
}

void Show(int result)
{
	cout << "\nThe result is: " << result << endl;
}

float Alpha(float x, float y)
{
	return x * y;
}

void Show(float result)
{
	cout << "\nThe result is: " << result << endl;
}

char Alpha(char x, char y)
{
	if (x > y)
		return x;
	else
		return y;
}

void Show(char result)
{
	cout << "\nThe result is: " << result << endl;
}