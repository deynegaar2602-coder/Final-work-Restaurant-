
#include "Cola.h"
#include <format>

std::string Cola::getSugar() const {
	return sugar;
}

Cola* Cola::setSugar(std::string sugar) {
	this->sugar = sugar;
	return this;
}

std::string Cola::toString() const {
	return std::format("{} ({}) {} Hrn, ({} ml)",
		getName(),
		sugar,
		getPrice(),
		getMililiters()
	);
}