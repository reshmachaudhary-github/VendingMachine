#pragma once


enum Items
{
	COFFEE = 1,
	TEA = 2,
	MILK = 3
};

class Item {
public:
	std::string item_Name;
	int item_Price;
	Items Item_ID;
	Item() {};
	Item(Items itemId, std::string name, int price) {
		Item_ID = itemId;
		item_Name = name;
		item_Price = price;
	}

	virtual void prepare() = 0;
};