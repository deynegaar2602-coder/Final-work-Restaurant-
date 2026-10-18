
#pragma once
#include "Food.h"

class Rolls : public Food {
private:
	double amount;
public:
	double getAmount() const;
	Rolls* setAmount(double);
	std::string toString() const override;
};