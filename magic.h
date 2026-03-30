#ifndef MAGIC_H
#define MAGIC_H

#include <iostream>
#include <string>
#include <vector>
#include "weapon.h"

using namespace std;

class Equipment::Weapon::Magic : public Equipment::Weapon {
private:
	string name;
	int manaCost;
	vector<string> learnedSpells;

public:
	Magic();
	Magic(string name, int manaCost);
	Magic(string name);
	~Magic();
	void learnSpell(string spellName);
	void castSpell(string spellName);
	void showStats() override;
	void showLearnedSpells();
};

#endif
