// declaration of vehicle
#include "Vehicle.h"

Vehicle::Vehicle() :
	speed(0), moving(false)
{
}

Vehicle::~Vehicle() {
	speed = 0;
	moving = false;
}

bool Vehicle::powerSwitch(Switch onOrOff) {
	bool on = false;

	if (onOrOff == SWITCH_OFF) {
		speed = 0;
		moving = false;
	}

	return(on);
}

unsigned int Vehicle::accelerate(unsigned int amount) {
	speed += amount;
	moving = true;

	return(speed);
}

unsigned int Vehicle::decelerate(unsigned int amount) {
	if (amount > speed)
		speed = 0;
	else
		speed -= amount;

	moving = (speed == 0) ? false : true;
	return (speed);
}

bool Vehicle::isMoving() const {
	return(moving);
}

unsigned int Vehicle::getSpeed() const {
	return (speed);
}

unsigned int Vehicle::setSpeed(unsigned int speedIn) {
	speed = speedIn;
	moving = true;

	return(speed);
}