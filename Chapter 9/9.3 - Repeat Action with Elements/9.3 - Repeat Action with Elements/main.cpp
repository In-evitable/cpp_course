#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

void PrintM(double valueF) {
	const double factor = 0.09290304;
	cout << setprecision(2) << setiosflags(ios::fixed) << factor * valueF << endl;
}

int main() {
	// const double factor = 0.09290304;
	// double areaF[] = { 1200.0, 1080.78, 981.5, 224.70 };

	vector <double> areaF;
	areaF.push_back(1200.0);
	areaF.push_back(1080.78);
	areaF.push_back(981.5);
	areaF.push_back(224.70);

	/*
	 
	for (int i = 0; i < sizeof(area) / sizeof(area[0]); i++)
	{
		cout << setprecision(2) << setiosflags(ios::fixed) << factor * area[i] << endl;
	}

	*/

	// for_each(areaF, areaF + 4, PrintM);

	for_each(areaF.begin(), areaF.end(), PrintM);	
	return 0;
}