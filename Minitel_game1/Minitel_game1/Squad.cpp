#include "Squad.h"

void Squad::add_member(PC *character)
{
	if (squad_slot.size() < squad_limit) {
		squad_slot.push_back(character);
	}
	else
		cout << "Not enough slot in the squad" << endl;
}

PC Squad::get_member(string str_name)
{
	for (int i = 0; i < squad_slot.size(); i++) {
		if (squad_slot[i]->get_name() == str_name)
			return *squad_slot[i];
	}
}

bool Squad::check_membername(string str_name)
{
	for (int i = 0; i < squad_slot.size(); i++) {
		if (squad_slot[i]->get_name() == str_name)
			return true;
	}
	return false;
}

void Squad::print_membername()
{
	for (int i = 0; i < squad_slot.size(); i++) {
		cout << squad_slot[i]->get_name() << endl;
	}
}
