// Template using array data types
// T is used to specify unknown data type

#include <iostream>
using namespace std;

template <class T>
class TArray
{
private:
	T* data;
	int size;
public:
	TArray(int n);
	void Gather();
	void Show();
};

template <class T>
TArray<T>::TArray(int n)
{
	data = new T[n];
	size = n;
}

template <class T>
void TArray<T>::Gather()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a number for the " << i + 1 << " value: ";
		cin >> data[i];
	}
}

template <class T>
void TArray<T>::Show()
{
	for (int i = 0; i < size; i++)
		cout << data[i] << endl;
}

int main()
{
	TArray<int> x(5);
	x.Gather();
	x.Show();

	return 0;
}