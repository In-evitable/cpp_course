// Multiple Inheritance

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

class Voltage : virtual public Resistance
{
protected:
	double V;
	double I;
public:
	Voltage(double v, int r) : Resistance(r) { V = v; }
	virtual void CalcI(void) { I = V / R; }
	virtual void Iout(void) { cout << I << endl; }
};

class Current : virtual public Resistance
{
protected:
	double V;
	double I;
public:
	Current(double i, int r) : Resistance(r) { I = i; }
	virtual void Vout(void) { cout << V << endl; }
	virtual void CalcV(void) { V = I * R; }
};

class OhmsLaw : public Voltage, public Current
{
public:
	OhmsLaw(double i, double v, double r) : Current(i, r),
		Voltage(v, r), Resistance(r) {}
};

int main()
{
	OhmsLaw L1(0.02, 10, 1000);
	L1.CalcV();
	L1.CalcI();
	L1.Rout();
	L1.Vout();
	L1.Iout();

	return 0;
}