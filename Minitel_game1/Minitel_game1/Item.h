#pragma once

#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

using namespace std;

class Item
{
protected:
	string item_name;
public:
	Item(string item_name);
	virtual ~Item();
	void inv_printer();
	virtual void print_item() = 0;
	//friend std::ostream& operator<<(std::ostream& out, const Item p);
};

