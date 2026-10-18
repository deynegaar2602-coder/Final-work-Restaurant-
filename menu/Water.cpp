
#include "Water.h"
#include <format>

std::string Water::getCarbonated() const {
	return сarbonated;
}

Water* Water::setCarbonated(std::string сarbonated) {
	this->сarbonated = сarbonated;
	return this;
}

std::string Water::toString() const {
	return std::format("{} ({}) {} Hrn, ({} ml)",
		getName(),
		сarbonated,
		getPrice(),
		getMililiters()
	);
}