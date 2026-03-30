#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include "equipment.h"

using namespace std;

class Equipment::Weapon : public Equipment {
private:
	string type;
	int damage;
	string name;

public:
	Weapon();
	Weapon(string name, string Type, int damage);
	Weapon(string name, int damage);
	~Weapon();
	void showStats() override;

	class Rifles;
	class Magic;
};

#endif
