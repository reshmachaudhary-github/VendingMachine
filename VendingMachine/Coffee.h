#pragma once
#include "Item.h"

class Coffee :
    public Item
{
public:
	Coffee(Items id, std::string name, int price);
	void prepare();
};

