#ifndef RIFLES_H
#define RIFLES_H

#include <string>
#include <iostream>
#include "weapon.h"

using namespace std;

class Equipment::Weapon::Rifles : public Equipment::Weapon {
private:
	string name;
	int ammo;
	int maxAmmo;

public:
	Rifles();
	Rifles(string name, int maxAmmo);
	Rifles(string name, string type, int maxAmmo);
	~Rifles();
	string getName() const;
	int getAmmo() const;
	int getMaxAmmo() const;
	void reload();
	void shoot();
	void unload();
	void showStats() override; // override указывает, что метод переопределён
};

#endif
