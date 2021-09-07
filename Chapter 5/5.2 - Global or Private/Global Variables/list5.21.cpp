// usage of global variables

#include <iostream>
using namespace std;

float Area = 0;
int Height = 0;
int Length = 0;

class Test
{
public:
	void CalcArea();
	void ShowArea();
};

void Test::CalcArea()
{
	Area += Height * Length;
}

void Test::ShowArea()
{
	cout << "The Area is " << Area << endl;
}

int main()
{
	cout << "Enter a Height: ";
	cin >> Height;
	cout << "Enter a Length: ";
	cin >> Length;

	Test Square;
	Square.CalcArea();
	Square.ShowArea();

	Test Box;
	Box.CalcArea();
	Box.ShowArea();

	return 0;
}