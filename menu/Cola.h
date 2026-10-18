
#pragma once
#include "Drinks.h"

class Cola : public Drinks {
private:
	std::string sugar;
public:
	std::string getSugar() const;
	Cola* setSugar(std::string);
	std::string toString() const override;
};