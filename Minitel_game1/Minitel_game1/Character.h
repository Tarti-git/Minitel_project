#pragma once
#include "Equipement.h"
#include <iostream>
#include <map>
#include <string>

typedef enum Attribute { simplet, fighter, sharpshooter, tank, weakling, armageddon, undefined };

typedef enum Status { alive, dead };

using namespace std;

class Character
{
protected:
	string name;
	int hp;
	int base_hp;
	int atk_cac;
	int atk_dis;
	int def_cac;
	int def_dis;
	int esq;
	Attribute attr;
	Status status;
public:
	Character(string name, Attribute attr = undefined, int hp = 100, int atk_cac = 5, int atk_dis = 5, int def_cac = 4, int def_dis = 4, int esq = 1);
	virtual ~Character() {};
	virtual void print_character() = 0;
};

/////////////////////////////////////////////////////////

class NPC : public Character
{
private:
	int loot_chance;
public:
	NPC(string name, Attribute attr = undefined, int hp = 100, int loot_chance = 10, int atk_cac = 5, int atk_dis = 5, int def_cac = 4, int def_dis = 4, int esq = 1) : Character(name, attr, hp, atk_cac, atk_dis, def_cac, def_dis, esq) { this->loot_chance = loot_chance; };
	~NPC() {};
	void print_character() override;
};

/////////////////////////////////////////////////////////

class PC : public Character
{
private:
	Equipement equipement;
	int level;
public:
	string get_name();
	PC(string name, Attribute attr = undefined, int hp = 100, int level = 1, int atk_cac = 5, int atk_dis = 5, int def_cac = 4, int def_dis = 4, int esq = 1) : Character(name, attr, hp, atk_cac, atk_dis, def_cac, def_dis, esq) { this->level = level; };
	~PC() {};
	void print_character() override;
};
