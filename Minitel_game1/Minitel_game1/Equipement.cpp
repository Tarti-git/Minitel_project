#include "Equipement.h"

Equipement::Equipement(Weapon_cac weapon, Armor_body body, Armor_helmet helmet)
{
	this->weapon = weapon;
	this->body = body;
	this->helmet = helmet;
}

Equipement::Equipement(Weapon_dis weapon, Armor_body body, Armor_helmet helmet)
{
	this->weapon = weapon;
	this->body = body;
	this->helmet = helmet;
}

void Equipement::print_equip()
{
	cout << "Weapon : ";
	weapon.print_item();
	cout << " (" << typeid(weapon).name() << ")" << endl;
	cout << "Body Armor : ";
	body.print_item();
	cout << " (" << typeid(body).name() << ")" << endl;
	cout << "Helmet : ";
	helmet.print_item();
	cout << " (" << typeid(helmet).name() << ")" << endl;
}
