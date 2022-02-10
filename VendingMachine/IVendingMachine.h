#pragma once
class IVendingMachine
{
public:
	virtual void displayMenu() = 0;
	virtual void initialise() = 0;
	virtual void processOrder(int choice) = 0;
};

