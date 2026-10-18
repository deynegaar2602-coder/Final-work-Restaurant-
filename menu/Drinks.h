#pragma once
#include "Dishes.h"

class Drinks : public Dishes {
private:
	double      mililiters;
public:
	double		getMililiters() const;
	Drinks*			setMililiters(double mililiters);
};