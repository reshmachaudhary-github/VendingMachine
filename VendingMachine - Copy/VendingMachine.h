#pragma once

#include "Item.h"
#include "Coffee.h"
#include "Tea.h"
#include "Milk.h"


class VendingMachine
{
private:
	VendingMachine() {};
	static VendingMachine* vendingInstance;
	
public:
	static VendingMachine* getVendingMachine() {
		if (NULL == vendingInstance) {
			vendingInstance = new VendingMachine();
		}
		return vendingInstance;
	}
	void displayMenu();
	void initialise();
	void processOrder(int choice);

};



