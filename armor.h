#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>
#include <string>
#include "equipment.h"

using namespace std;

class Equipment::Armor : public Equipment {
private:
	string type;
	int protectionPoints;
	string name;

public:
	Armor();
	Armor(string name, string type, int protectionPoints);
	Armor(string type, int protectionPoints);
	~Armor();
	void showStats() override;
};

#endif
