
#include <format>
#include "Rolls.h"

double Rolls::getAmount() const {
	return amount;
}

Rolls* Rolls::setAmount(double amount) {
	this->amount = amount;
	return this;
}

std::string Rolls::toString() const {
	return std::format(
		"{} ({} pieces) {} Hrn, {}",
		getName(),
		amount,
		getPrice(),
		getType()
	);
}