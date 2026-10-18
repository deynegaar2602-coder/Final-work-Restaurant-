
#pragma once
#include "Dishes.h"

class Food : public Dishes {
private:
	std::string      type;
public:
	std::string		getType() const;
	Food*			setType(std::string type);
};