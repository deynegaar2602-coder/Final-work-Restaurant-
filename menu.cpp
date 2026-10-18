
#include <iostream>
#include "menu.h"

void menu() {
	std::cout << "Restaurant Menu" << std::endl;

	Dishes* stock[4];

#pragma region Objects
	stock[0] = (new Pizza())
		->setDiameter(60)
		->setType("Hot dish")
		->setName("Pizza super cheese")
		->setPrice(420);
	stock[1] = (new Rolls)
		->setAmount(12)
		->setType("Cold dish")
		->setName("Rolls Filadelphy")
		->setPrice(460);

	stock[2] = (new Cola())
		->setSugar("With sugar")
		->setMililiters(700)
		->setName("Coca Cola")
		->setPrice(180);
	stock[3] = (new Water)
		->setCarbonated("Not carbonated")
		->setMililiters(400)
		->setName("Water UA")
		->setPrice(60);

	for (auto dishes : stock) {
		std::cout << dishes->toString() << std::endl;
	}
#pragma endregion
}