#include "include/ship.h"
#include <stdio.h>

void init(Ship* ship, double mass) {
	ship->altitude = 5.0;
	ship->velocity = 0.0;
	ship->totalDistance = 0.0;
	ship->mass = mass;
}

void printShip(Ship* ship) {
	(void)printf(
		"V: %g m/s. A: %g m. D: %g m. F: %g l.                   \r",
		ship->velocity, ship->altitude,
		ship->totalDistance, ship->fuel
	);
}

void printShipNl(Ship* ship) {
	(void)printf(
		"V: %g m/s. A: %g m. D: %g m. F: %g l.                   \n",
		ship->velocity, ship->altitude,
		ship->totalDistance, ship->fuel
	);
}