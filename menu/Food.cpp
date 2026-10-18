
#include "Food.h"

std::string Food::getType() const {
	return type;
}

Food* Food::setType(std::string type) {
	this->type = type;
	return this;
}