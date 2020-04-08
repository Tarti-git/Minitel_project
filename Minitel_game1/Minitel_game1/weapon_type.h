#pragma once

#include "item_type.h"

class Weapon_cac : public Weapon
{
private:
public:
	Weapon_cac(string weapon_name, int damage_value) : Weapon(weapon_name, damage_value) {};
	~Weapon_cac() {};
};

////////////////////////////////////////////////////

class Weapon_dis : public Weapon
{
private:
public:
	Weapon_dis(string weapon_name, int damage_value) : Weapon(weapon_name, damage_value) {};
	~Weapon_dis() {};
};