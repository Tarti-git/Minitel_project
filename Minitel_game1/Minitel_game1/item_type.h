#pragma once

#include "Item.h"

class Weapon : public Item
{
protected:
	int damage_value;
public:
	Weapon(string name = "undefined", int damage_value = 0);
	virtual ~Weapon();
	void print_item() override;
	friend std::ostream& operator<<(std::ostream& out, const Weapon& p);
};

////////////////////////////////////////////////////


class Bonus : public Item
{
private:
	int bonus_value;
public:
	Bonus(string name = "undefined", int bonus_value = 0);
	~Bonus();
	void print_item() override;
	friend std::ostream& operator<<(std::ostream& out, const Bonus& p);
};

////////////////////////////////////////////////////


class Heal : public Item
{
private:
	int heal_value;
public:
	Heal(string name = "undefined", int heal_value = 0);
	~Heal();
	void print_item() override;
	friend std::ostream& operator<<(std::ostream& out, const Heal& p);
};

////////////////////////////////////////////////////

class Armor : public Item
{
protected:
	int armor_value;
public:
	Armor(string name = "undefined", int armor_value = 0);
	virtual ~Armor();
	void print_item() override;
	friend std::ostream& operator<<(std::ostream& out, const Armor& p);
};