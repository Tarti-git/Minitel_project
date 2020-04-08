#pragma once
#include "Character.h"
#include "Inventory.h"
#include <vector>
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Squad
{
private:
	vector<PC*> squad_slot;
	int squad_limit;
	Inventory inventory;
	int money;
public:
	void add_member(PC *character);
	PC get_member(string str_name);
	bool check_membername(string str_name);
	void print_membername();
	Squad(int squad_limit = 1, int money = 0) { this->squad_limit = squad_limit; this->money = money; };
	~Squad() {};
};

