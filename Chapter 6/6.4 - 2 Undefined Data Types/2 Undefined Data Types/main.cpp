// Template using two simple data types

#include <iostream>
using namespace std;

template <class T1, class T2>
class A
{
private:
	T1 a;
	T2 b;

public:
	A(T1 n, T2 i);
	void Show(void);
};

template <class T1, class T2>
A<T1, T2>::A(T1 n, T2 i)
{
	a = n;
	b = i;
}

template <class T1, class T2>
void A<T1, T2>::Show(void)
{
	cout << a << " " << typeid(a).name() << endl;
	cout << b << " " << typeid(b).name() << endl;
}

int main()
{
	A<int, double> x(5, 3.5);
	x.Show();

	return 0;
}