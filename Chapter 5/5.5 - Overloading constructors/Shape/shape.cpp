// a class with three constructors
// this is called overloading

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
public:
	Shape(int a);
	Shape(int a, int b);
	Shape(int a, int b, int c);
	void Show(void);
private:
	double result;
};

// circle constructor
Shape::Shape(int a)
{
	result = M_PI * a * a;
}

// rectangle constructor
Shape::Shape(int a, int b)
{
	result = a * b;
}

// cube contructor
Shape::Shape(int a, int b, int c)
{
	result = a * b * c;
}

void Shape::Show(void)
{
	cout << "The result is: " << result << endl;
}

int main()
{
	Shape circle(5);
	Shape rect(3, 4);
	Shape box(3, 4, 5);

	circle.Show();
	rect.Show();
	box.Show();

	return 0;
}