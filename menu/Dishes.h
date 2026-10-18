

#pragma once
#include <string>

class Dishes {
private:
	std::string name;
	double price;

public:
	std::string getName() const;
	Dishes*		setName(std::string);
	double		getPrice() const;
	Dishes*		setPrice(double);

	virtual std::string toString() const = 0;
};