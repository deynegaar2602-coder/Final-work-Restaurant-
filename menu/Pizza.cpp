
#include "Pizza.h"
#include <format>

double Pizza::getDiameter() const {
	return diameter;
}

Pizza* Pizza::setDiameter(double diameter) {
	this->diameter = diameter;
	return this;
}

std::string Pizza::toString() const {
	return std::format("{} ({} Cm) {} Hrn, {}",
		getName(),
		diameter,
		getPrice(),
		getType()
	);
}