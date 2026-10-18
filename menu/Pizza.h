
#pragma once
#include "Food.h"

class Pizza : public Food {
private:
	double diameter;
public:
	double getDiameter() const;
	Pizza* setDiameter(double);
	std::string toString() const override;
};