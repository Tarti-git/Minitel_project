#pragma once
#include "item_includer.h"

class Equipement
{
private:
	Weapon weapon;
	Armor_body body;
	Armor_helmet helmet;
public:
	Equipement(Weapon_cac weapon = Weapon_cac("none", 0), Armor_body body = Armor_body("none", 0), Armor_helmet helmet = Armor_helmet("none", 0));
	Equipement(Weapon_dis weapon, Armor_body body, Armor_helmet helmet);
	~Equipement() {};
	void print_equip();
};

