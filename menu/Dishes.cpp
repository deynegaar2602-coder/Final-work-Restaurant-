
#include <string>
#include "Dishes.h"

std::string Dishes::getName() const {
	return name;
}

Dishes* Dishes::setName(std::string name) {
	this->name = name;
	return this;
}

double Dishes::getPrice() const {
	return price;
}

Dishes* Dishes::setPrice(double price) {
	this->price = price;
	return this;
}