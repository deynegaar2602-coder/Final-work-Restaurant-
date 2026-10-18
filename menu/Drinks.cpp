
#include "Drinks.h"

double Drinks::getMililiters() const {
	return mililiters;
}

Drinks* Drinks::setMililiters(double mililiters) {
	this->mililiters = mililiters;
	return this;
}