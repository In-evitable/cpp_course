// the scope resolution operator

#include <iostream>
using namespace std;

class Alpha
{
public:
	Alpha(int x, int y);
	void Calc();
	void Show();

private:
	int Val1, Val2;
	int total;
};

class Beta
{
public:
	Beta(int x, int y);
	void Calc();
	void Show();

private:
	int Val1, Val2;
	int total;
};

void Alpha::Calc()
{
	total = 0;
	total = Val1 + Val2;
}

void Alpha::Show()
{
	cout << "The total is " << total << endl;
}

Alpha::Alpha(int x, int y)
{
	Val1 = x;
	Val2 = y;
}

void Beta::Calc()
{
	total = 0;
	total = Val1 * Val2;
}

void Beta::Show()
{
	cout << "The product is " << total << endl;
}

Beta::Beta(int x, int y)
{
	Val1 = x;
	Val2 = y;
}

int main()
{
	int Num1, Num2;

	cout << "Enter Number 1 ";
	cin >> Num1;
	cout << "Enter Number 2 ";
	cin >> Num2;

	Alpha First(Num1, Num2);
	First.Calc();
	First.Show();

	Beta Second(Num1, Num2);
	Second.Calc();
	Second.Show();
}