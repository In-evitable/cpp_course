// Template reads in a simple data type
// T is used to identify an unknown data type

#include <iostream>
using namespace std;

template <class T>
class TSimple
{
private:
	T data;
public:
	TSimple();
	void Gather();
	void Show();
};

template <class T>
TSimple<T>::TSimple()
{
	cout << "Template class contructed" << endl;
}

template <class T>
void TSimple<T>::Gather()
{
	cout << "Enter the data: ";
	cin >> data;
}

template <class T>
void TSimple<T>::Show()
{
	cout << data << endl;
}

int main()
{
	TSimple<int> x;
	x.Gather();

	TSimple<char> y;
	y.Gather();

	TSimple<double> z;
	z.Gather();

	x.Show();
	y.Show();
	z.Show();

	return 0;
}