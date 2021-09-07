// accessing member functions using dot notation

#include <iostream>
using namespace std;

class Greatest
{
public:
	Greatest();
	~Greatest();
	void Gather(void);
	void Calc(void);
	void Show(void);
private:
	int first;
	int second;
	int result;
};

Greatest::Greatest()
{
	result = 0;
	cout << "New test object created" << endl << endl;
}

Greatest::~Greatest()
{
	cout << "Test object destroyed" << endl << endl;
}

void Greatest::Gather(void)
{
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;
}

void Greatest::Calc(void)
{
	if (first > second)
		result = first;
	else
		result = second;
}

void Greatest::Show(void)
{
	cout << "The greatest number is: " << result;
	cout << endl << endl;
}

int main()
{
	char again;

	while (true)
	{
		Greatest test;
		test.Gather();
		test.Calc();
		test.Show();
		cout << "Again (y/n): ";
		cin >> again;
		if (again != 'y')
			break;
	}

	return 0;
}