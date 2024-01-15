#include "include/physics.h"
#include <math.h>
#include <stdio.h>

void launch(Ship* ship, double velocity) {
	ship->velocity = velocity;
}

double gravity(Ship* ship, Planet* planet) {
	double g = planet->gravity;
	double re = planet->radius;
	double h = ship->altitude;

	return g * ((re / (re + h)) * (re / (re + h)));
}