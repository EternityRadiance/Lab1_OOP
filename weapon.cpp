#include "weapon.h"

Equipment::Weapon::Weapon() : Equipment("", 0), name(" "), type(" "), damage(0) {}

Equipment::Weapon::Weapon(string name, string type, int damage) : Equipment(name, 0), name(name), type(type), damage(damage) {}

Equipment::Weapon::Weapon(string name, int damage) : Equipment(name, 0), name(name), type(""), damage(damage) {}

Equipment::Weapon::~Weapon() {
	cout << "Удалено оружие \"" << name << "\" " << endl;
}

void Equipment::Weapon::showStats() {
	cout << "Статистика оружия: " << endl;
	cout << "Название: " << name << endl;
	cout << "Тип: " << type << endl;
	cout << "Урон: " << damage << endl;
}
