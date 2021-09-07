// inheritance
#include <iostream>
using namespace std;

class Beta
{
public:
	Beta(int x, int y);
	void Calc(void);
	void Show(void);

protected:
	int Val1, Val2;
	int total;
};

class Alpha : public Beta
{
public:
	Alpha(int z, int x, int y);
	void CalcII(void);
	void ShowII(void);
protected:
	int Val3;
	int NewTotal;
};

Beta::Beta(int x, int y)
{
	Val1 = x;
	Val2 = y;
}

void Beta::Calc(void)
{
	total = Val1 * Val2;
}

void Beta::Show(void)
{
	cout << "\nThe total is " << total << endl;
}

Alpha::Alpha(int z, int x, int y):Beta(x, y)
{
	Val3 = z;
}

void Alpha::CalcII(void)
{
	NewTotal = Val1 * Val2 * Val3;
}

void Alpha::ShowII(void)
{
	cout << "The new total is " << NewTotal << endl;
}

int main()
{
	int x, y, z;
	cout << "Enter a number: ";
	cin >> x;
	cout << "\nEnter another number: ";
	cin >> y;
	cout << "\nEnter a third enter: ";
	cin >> z;

	Alpha First(z, x, y);
	First.Calc();
	First.CalcII();
	First.Show();
	First.ShowII();

	return 0;
}