#include "Character.h"

Character::Character(string name, Attribute attr, int hp, int atk_cac, int atk_dis, int def_cac, int def_dis, int esq)
{
	this->name = name;
	this->hp = hp;
	this->base_hp = hp;
	this->atk_cac = atk_cac;
	this->atk_dis = atk_dis;
	this->def_cac = def_cac;
	this->def_dis = def_dis;
	this->esq = esq;
	this->attr = attr;
	status = alive;
}

void NPC::print_character()
{
	cout << "--------------------" << endl;
	cout << "Name : " << name << endl;
	cout << "HP : " << hp << "/" << base_hp << endl;
	cout << "Attaque(Melee) : " << atk_cac << endl;
	cout << "Attaque(Ranged) : " << atk_dis << endl;
	cout << "Defense(Melee) : " << def_cac << endl;
	cout << "Defense(Ranged) : " << def_dis << endl;
	cout << "Dodge : " << esq << endl;
	cout << "Attribute : ";
	switch (attr) {
	case simplet:
		cout << "Simplet" << endl;
		break;
	case fighter:
		cout << "Fighter" << endl;
		break;
	case sharpshooter:
		cout << "Sharpshooter" << endl;
		break;
	case tank:
		cout << "Tank" << endl;
		break;
	case weakling:
		cout << "Weakling" << endl;
		break;
	case armageddon:
		cout << "Armageddon" << endl;
		break;
	case undefined:
		cout << "Undefined" << endl;
		break;
	}
	cout << "Status : ";
	switch (status) {
	case alive:
		cout << "Alive" << endl;
		break;
	case dead:
		cout << "Dead" << endl;
		break;
	}
	cout << "--------------------" << endl;
}

string PC::get_name()
{
	return name;
}

void PC::print_character()
{
	cout << "--------------------" << endl;
	cout << "Name : " << name << endl;
	cout << "Level : " << level << endl;
	cout << "HP : " << hp << "/" << base_hp << endl;
	cout << "Attack(Melee) : " << atk_cac << endl;
	cout << "Attack(Ranged) : " << atk_dis << endl;
	cout << "Defense(Melee) : " << def_cac << endl;
	cout << "Defense(Ranged) : " << def_dis << endl;
	cout << "Dodge : " << esq << endl;
	cout << "Attribute : ";
	switch (attr) {
	case simplet:
		cout << "Simplet" << endl;
		break;
	case fighter:
		cout << "Fighter" << endl;
		break;
	case sharpshooter:
		cout << "Sharpshooter" << endl;
		break;
	case tank:
		cout << "Tank" << endl;
		break;
	case weakling:
		cout << "Weakling" << endl;
		break;
	case armageddon:
		cout << "Armageddon" << endl;
		break;
	case undefined:
		cout << "Undefined" << endl;
		break;
	}
	cout << "Status : ";
	switch (status) {
	case alive:
		cout << "Alive" << endl;
		break;
	case dead:
		cout << "Dead" << endl;
		break;
	}
	cout << "--------------------" << endl;
}
