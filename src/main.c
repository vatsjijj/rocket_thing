#include "include/ship.h"
#include "include/physics.h"
#include "include/game.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
	Ship ship;
	Planet earth;
	earth.gravity = 9.8;
	earth.mass = 5.9722e+24;
	earth.radius = 6371009.0;
	init(&ship, 2800000.0);
	ship.fuel = 1000.0;
	ship.consumptionRate = 10.0;
	ship.boosterAccel = 1000.0;
	// 11265.408
	launch(&ship, 0.0);
	run(&ship, &earth);
	printShipNl(&ship);
	return 0;
}