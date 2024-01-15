#ifndef SHIP_H
#define SHIP_H

// Uses meters for measurement.
typedef struct {
	double mass;
	double velocity;
	double altitude;
	double totalDistance;
	double fuel, consumptionRate;
	double boosterAccel;
} Ship;

void init(Ship* ship, double mass);

void printShip(Ship* ship);

void printShipNl(Ship* ship);

#endif