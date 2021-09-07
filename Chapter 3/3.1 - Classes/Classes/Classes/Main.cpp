#include <iostream>
#include "Vehicle.h"
using namespace std;

int main() {
	Vehicle vehicle;
	Vehicle* pv = new Vehicle();

	vehicle.setSpeed(10);
	pv->setSpeed(20);

	cout << "vehicle's speed: " << vehicle.getSpeed() << endl;
	cout << "pv's speed: " << pv->getSpeed() << endl;

	delete pv;
	return 0;
}