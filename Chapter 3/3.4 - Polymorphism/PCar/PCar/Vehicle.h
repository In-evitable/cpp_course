// vehicle.h - this file contains a class
// declaration for the vehicle type

class Vehicle {

public:
	enum Switch { SWITCH_ON, SWITCH_OFF };
	Vehicle();
	virtual ~Vehicle();

	virtual bool powerSwitch(Switch onOrOff);
	virtual unsigned int accelerate(unsigned int amount);
	virtual unsigned int decelerate(unsigned int amount);

	virtual bool isMoving(void) const;
	virtual unsigned int getSpeed(void) const;
	virtual unsigned int setSpeed(unsigned int speedIn);

protected:
	bool moving;

private:
	unsigned int speed;
};