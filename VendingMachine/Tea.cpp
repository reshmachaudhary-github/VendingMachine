#include <iostream>
#include "Tea.h"

Tea::Tea(Items id, std::string name, int price) {
	this->Item_ID = id;
	this->item_Name = name;
	this->item_Price = price;
}

void Tea::prepare() {
	// DO Tea class specific processing here
	std::cout << "\n Preparing " << item_Name << " ...\n";
	std::cout << "Your order is ready \n";
}
