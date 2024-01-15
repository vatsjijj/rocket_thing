#ifndef PHYSICS_H
#define PHYSICS_H

#include "ship.h"

// Uses meters and kg.
typedef struct {
	double mass;
	double radius;
	double gravity;
} Planet;

void launch(Ship* ship, double velocity);

double gravity(Ship* ship, Planet* planet);

#endif