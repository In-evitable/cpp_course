#include <iostream>
using namespace std;

class Test
{
private:
	float Area;
	int Height;
	int Length;
public:
	void CalcArea();
	void ShowArea();
	Test(int H, int L); // Constructor
};

void Test::CalcArea()
{
	Area = Height * Length;
}

void Test::ShowArea()
{
	cout << "The Area is " << Area << endl;
}

Test::Test(int H, int L)
{
	Height = H; // Pass parameters
	Length = L;
}

int main()
{
	int Height, Length;

	cout << "Enter a height: ";
	cin >> Height;
	cout << "Enter a length: ";
	cin >> Length;

	Test Square(Height, Length);
	Square.CalcArea();
	Square.ShowArea();

	cout << "Enter a height: ";
	cin >> Height;
	cout << "Enter a length: ";
	cin >> Length;

	Test Box(Height, Length);
	Box.CalcArea();
	Box.ShowArea();

	return 0;
}