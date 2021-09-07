// car.h - this file contains a class declaration
// for the Car type, derived from Vehicle
#include "Vehicle.h"

class Car : public Vehicle {
public:
	enum { MAX_SPEED = 80 };
	Car();
	~Car();

	unsigned int setSpeed(unsigned int speedIn);
	void steer(int degrees);
	void headlights(Switch onOrOff);

private:
	int degrees;
	Switch drivingLights;
};