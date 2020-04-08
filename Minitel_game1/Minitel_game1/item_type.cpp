#include "item_type.h"

Weapon::Weapon(string name, int damage_value) : Item(name)
{
	this->damage_value = damage_value;
}

Weapon::~Weapon()
{
}

void Weapon::print_item()
{
	cout << item_name;
	cout << " (DMG=" << damage_value << ")";
}

std::ostream& operator<<(std::ostream& out, const Weapon& p)
{
	out << "this weapon is a " << p.item_name << "[" << typeid(p).name() << "] (deals " << p.damage_value << " damage(s))." << endl;
	return out;
}

////////////////////////////////////////////////////

Bonus::Bonus(string name, int bonus_value) : Item(name)
{
	this->bonus_value = bonus_value;
}

Bonus::~Bonus()
{
}

void Bonus::print_item()
{
	cout << item_name;
	cout << " (BNS=" << bonus_value << ")";
}

std::ostream& operator<<(std::ostream& out, const Bonus& p)
{
	out << "this bonus is a " << p.item_name << " (gives " << p.bonus_value << " bonus(es))." << endl;
	return out;
}

////////////////////////////////////////////////////


Heal::Heal(string name, int heal_value) : Item(name)
{
	this->heal_value = heal_value;
}

Heal::~Heal()
{
}

void Heal::print_item()
{
	cout << item_name;
	cout << " (HL=" << heal_value << ")";
}

std::ostream& operator<<(std::ostream& out, const Heal& p)
{
	out << "this healing item is a " << p.item_name << " (heals " << p.heal_value << " hp(s))." << endl;
	return out;
}

////////////////////////////////////////////////////

Armor::Armor(string name, int armor_value) : Item(name)
{
	this->armor_value = armor_value;
}

Armor::~Armor()
{
}

void Armor::print_item()
{
	cout << item_name;
	cout << " (ARM=" << armor_value << ")";
}

std::ostream& operator<<(std::ostream& out, const Armor& p)
{
	out << "this armor is a " << p.item_name << " (gives " << p.armor_value << " armor(s))." << endl;
	return out;
}

