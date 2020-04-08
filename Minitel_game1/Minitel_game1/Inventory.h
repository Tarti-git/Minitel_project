#pragma once
#include "item_includer.h"
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

class Inventory
{
private:
	vector<Item*> inv_slot;
	int inv_capacity;
public:
	void add_item(Item *item);
	void print_list();
	Inventory(int inv_capacity = 5) { this->inv_capacity = inv_capacity; };
	~Inventory() {};
};

