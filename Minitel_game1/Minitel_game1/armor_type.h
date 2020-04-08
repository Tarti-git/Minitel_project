#pragma once

#include "item_type.h"

class Armor_helmet : public Armor
{
private:
public:
	Armor_helmet(string armor_name = "undefined", int armor_value = 0) : Armor(armor_name, armor_value) {};
	~Armor_helmet() {};
};

////////////////////////////////////////////////////

class Armor_body : public Armor
{
private:
public:
	Armor_body(string armor_name = "undefined", int armor_value = 0) : Armor(armor_name, armor_value) {};
	~Armor_body() {};
};

