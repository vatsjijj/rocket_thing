#include "include/game.h"
#include <stdint.h>
#include <stdio.h>
#include <time.h>

void update(Ship* ship, Planet* planet) {
	if (ship->fuel > 0.0) ship->fuel -= ship->consumptionRate;
	if (ship->fuel <= 0.0) ship->boosterAccel -= gravity(ship, planet);
	ship->velocity += ship->boosterAccel;
	ship->altitude += ship->velocity;
	if (ship->velocity < 0.0) {
		ship->totalDistance -= ship->velocity;
	}
	else {
		ship->totalDistance += ship->velocity;
	}
	ship->velocity -= gravity(ship, planet);
}

void run(Ship* ship, Planet* planet) {
	struct timespec time1, time2;
	time1.tv_sec = 0;
	time1.tv_nsec = 50000000L;
	for (uint32_t i = 0; i < 1048575; i++) {
		if (ship->altitude <= 0) {
			ship->altitude = 0;
			break;
		}
		printShip(ship);
		update(ship, planet);
		(void)fflush(stdout);
		(void)nanosleep(&time1, &time2);
	}
}