#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>

using namespace std;

class Equipment {
private:
	string name;
	int price;

public:
	Equipment();
	Equipment(string name, int price);
	~Equipment();

	string getName() const;
	int getPrice() const;
	void setName(string name);
	void setPrice(int price);

	void buyItem(int buyPrice);
	void sellItem(int sellPrice);
	void equipItem();
	virtual void showStats() = 0;

	class Weapon;
	class Armor;
};

#endif
