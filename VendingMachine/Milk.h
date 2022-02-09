#pragma once
#include "Item.h"
class Milk :
    public Item
{
public:
	Milk(Items id, std::string name, int price);
	void prepare();
};

