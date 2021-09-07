// Inheritance

#include <iostream>
using namespace std;

class Resistance
{
protected:
	int R;
public:
	Resistance(int r) { R = r; }
	virtual void Rout(void) { cout << R << endl; }
};

class Voltage : public Resistance
{
protected:
	double V;
	double I;
public:
	Voltage(double v, int r) : Resistance(r) { V = v; }
	virtual void CalcI(void) { I = V / R; }
	virtual void Iout(void) { cout << I << endl; }
};

class Current : public Resistance
{
protected:
	double V;
	double I;
public:
	Current(double i, int r) : Resistance(r) { I = i; }
	virtual void Vout(void) { cout << V << endl; }
	virtual void CalcV(void) { V = I * R; }
};

int main()
{
	// given the voltage and resistance
	// we can calculate the current
	Voltage V1(10, 27000);
	V1.CalcI();
	V1.Rout();
	V1.Iout();

	// given the current and the resistance
	// we can calculate the voltage
	Current I1(0.2, 68000);
	I1.CalcV();
	I1.Rout();
	I1.Vout();

	return 0;
}