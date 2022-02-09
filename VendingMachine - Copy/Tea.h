#pragma once
#include "Item.h"
class Tea :
    public Item
{
public:
	Tea(Items id, std::string name, int price);
	void prepare();
};

