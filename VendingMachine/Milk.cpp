#include <iostream>
#include "Milk.h"


Milk::Milk(Items id, std::string name, int price) {
	this->Item_ID = id;
	this->item_Name = name;
	this->item_Price = price;
}

void Milk::prepare() {
	// DO Milk class specific processing here
	std::cout << "\n Preparing " << item_Name << " ...\n";
	std::cout << "Your order is ready \n";
}