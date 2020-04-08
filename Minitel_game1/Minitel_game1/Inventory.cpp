#include "Inventory.h"

void Inventory::add_item(Item *item)
{
	if (inv_slot.size() < inv_capacity) {
		inv_slot.push_back(item);
	}
	else
		cout << "Not enough space" << endl;
}

void Inventory::print_list()
{
	for (int i = 0; i < inv_slot.size(); i++) {
		cout << "- ";
		inv_slot[i]->print_item();
		cout << endl;
	}
}
