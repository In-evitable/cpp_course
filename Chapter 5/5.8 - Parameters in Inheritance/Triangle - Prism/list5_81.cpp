// inheritance

#include <iostream>
using namespace std;

class Triangle
{
protected:
	double base;
	double height;
	double area;
public:
	Triangle(double b, double h) { base = h; height = h; }
	void CalcArea(void) { area = (base * height) / 2; }
	void ShowArea(void) { cout << "The area is: " << area << endl; }
};

class Prism : public Triangle
{
protected: 
	double depth;
public:
	Prism(double d, double b, double h) : Triangle(b, h) { depth = d; }
	void CalcArea(void) { area = (base * height * depth) / 2; }
};

int main()
{
	Prism test(3, 5, 10);
	test.CalcArea();
	test.ShowArea();

	return 0;
}