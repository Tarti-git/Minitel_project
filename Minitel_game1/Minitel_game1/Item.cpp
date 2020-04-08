#include "Item.h"

Item::Item(string item_name)
{
	this->item_name = item_name;
}

Item::~Item()
{
}

void Item::inv_printer()
{
	cout << item_name;
}

/*std::ostream& operator<<(std::ostream& out, const Item p)
{
	out << &p << endl;
	return out;
}*/


