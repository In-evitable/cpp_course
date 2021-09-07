// car.cpp implementation file
// for a Car; derived from Vehicle
#include "Car.h"

Car::Car() : Vehicle(),
degrees(0), drivingLights(SWITCH_OFF)
{}

Car::~Car() {
	degrees = 0;
	drivingLights = SWITCH_OFF;
}

unsigned int Car::setSpeed(unsigned int speedIn) {
	if (speedIn > MAX_SPEED)
		speedIn = MAX_SPEED;

	Vehicle::setSpeed(speedIn);
	moving = true;

	return(Vehicle::getSpeed());
}

void Car::steer(int degrees) {
	if (moving) {
		if (degrees == 0)
			this->degrees = 0;
		else
			this->degrees += degrees;
	}
}

void Car::headLights(Switch onOrOff) {
	drivingLights = onOrOff;
}