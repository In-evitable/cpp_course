// template using simple data types
// T is used to specify unknown data type

#include <iostream>
using namespace std;

template <class T>
class TSimple
{
private:
	T data;
public:
	TSimple(T n);
	void Show();
};

template <class T>
TSimple<T>::TSimple(T n) { data = n; }

template <class T>
void TSimple<T>::Show() { cout << data << endl; }

int main()
{
	TSimple<int> x(25);
	x.Show();
	TSimple<char> y('a');
	y.Show();
	TSimple<double> z(1.25);
	z.Show();

	return 0;
}