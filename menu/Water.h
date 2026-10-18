
#pragma once
#include "Drinks.h"

class Water : public Drinks {
private:
	std::string сarbonated;
public:
	std::string getCarbonated() const;
	Water* setCarbonated(std::string);
	std::string toString() const override;
};