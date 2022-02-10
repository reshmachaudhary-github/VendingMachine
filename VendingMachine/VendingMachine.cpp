// VendingMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "VendingMachine.h"


void VendingMachine::initialise() {
    // TODO : initialises the available item quantity.
    // Once can maintain inventory class for same. and get the details from it.
}

void VendingMachine::displayMenu() {

    // this is hard coded menu 
    // It can be read from any source and 
    // display accordingly
    std::cout << "\n Menu \n";
    std::cout << "1. COFFEE     Rs 100 \n";
    std::cout << "2. TEA        Rs 50 \n";
    std::cout << "3. MILK       Rs 75 \n";
    std::cout << "4. Exit           \n";
}

void VendingMachine::processOrder(int choice) {

    Item* currentOrder = NULL;

    switch (choice) {
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
    int amountpaid = 0;
    std::cout << "Please pay Rs." << currentOrder->item_Price << " \n";
    std::cout << "Amount paid: ";
    do {
        std::cin >> amountpaid;
        if (amountpaid < currentOrder->item_Price) {
            std::cout << "Insufficient amount !!! \n Returning money....\n Please enter sufficient amount : ";
        }
    } while (amountpaid < currentOrder->item_Price);

    if (amountpaid >= currentOrder->item_Price) {
        std::cout << "Please collect change : Rs. " << amountpaid - currentOrder->item_Price << " \n";
        std::cout << "Order placed successfully";
    }

    currentOrder->prepare();
}

int main()
{
    VendingMachine* CCD = new VendingMachine();
    int choice = 0;

    do {
        CCD->displayMenu();
        std::cout << "\n Enter choice: ";
        std::cin >> choice;
        if (choice == 4) {
            break;
        }
        if (choice <= 0 || choice >= 5)
        {
            std::cout << "Enter Valid choice !!!";
        }
        else {
            CCD->processOrder(choice);
        }
    } while (choice != 4);
}

