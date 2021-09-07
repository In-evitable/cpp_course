#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double factor = 0.09290304;
	double area[] = { 1200.0, 1080.78, 981.5, 224.70 };

	for (int i = 0; i < sizeof(area) / sizeof(area[0]); i++)
	{
		cout << setprecision(2) << setiosflags(ios::fixed) << factor * area[i] << endl;
	}

	return 0;
}