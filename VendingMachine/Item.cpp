
#include <iostream>
#include "Item.h"
#include "Coffee.h"
#include "Tea.h"
#include "Milk.h"


// Method to create required menu item
Item* Item::createItem(int type) {
	Item* currentOrder = NULL;

	switch (type) {
	case Items::COFFEE: {
		currentOrder = new Coffee(Items::COFFEE, "Coffee", 100);
		break;
	}

	case Items::TEA: {
		currentOrder = new Tea(Items::TEA, "Tea", 50);
		break;
	}

	case Items::MILK: {
		currentOrder = new Milk(Items::MILK, "Milk", 75);
		break;
	}
	}
	return currentOrder;
}