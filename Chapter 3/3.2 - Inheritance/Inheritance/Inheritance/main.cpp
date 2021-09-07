#include <iostream>
using namespace std;
#include "Car.h"

int main() {
	Car* sporty = new Car();
	Car* luxury = new Car();

	sporty->setSpeed(120);
	luxury->setSpeed(35);
	
	luxury->steer(20); // turn to right

	luxury->headlights(Vehicle::SWITCH_ON);
	luxury->accelerate(15);

	cout << "sporty's speed : " << sporty->getSpeed() << endl;
	cout << "pLuxury's speed : " << luxury->getSpeed() << endl;

	if (sporty->isMoving())
		cout << "sporty is moving" << endl;
	else
		cout << "sporty isn't moving" << endl;

	delete luxury;
	delete sporty;

	return 0;
}