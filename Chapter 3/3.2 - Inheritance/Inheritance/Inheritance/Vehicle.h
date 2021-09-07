// vehicle.h - this file contains a class
// declaration for the vehicle type

class Vehicle {

public:
	enum Switch { SWITCH_ON, SWITCH_OFF };
	Vehicle();
	~Vehicle();

	bool powerSwitch(Switch onOrOff);
	unsigned int accelerate(unsigned int amount);
	unsigned int decelerate(unsigned int amount);

	bool isMoving(void) const;
	unsigned int getSpeed(void) const;
	unsigned int setSpeed(unsigned int speedIn);

protected:
	bool moving;

private:
	unsigned int speed;
};