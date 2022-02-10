#pragma once

#include "IVendingMachine.h"
#include "Item.h"
#include "Coffee.h"
#include "Tea.h"
#include "Milk.h"


class VendingMachine : public IVendingMachine
{
public:
	VendingMachine() {};
	void displayMenu();
	void initialise();
	void processOrder(int choice);

};



