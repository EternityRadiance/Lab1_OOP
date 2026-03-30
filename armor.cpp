#include "armor.h"

Equipment::Armor::Armor() : Equipment("", 0), name(" "), type(" "), protectionPoints(0) {}

Equipment::Armor::Armor(string name, string type, int protectionPoints) :
	Equipment(name, 0), name(name), type(type), protectionPoints(protectionPoints) {}

Equipment::Armor::Armor(string type, int protectionPoints) : 
	Equipment(" ", 0), name(" "), type(type), protectionPoints(protectionPoints) {}

Equipment::Armor::~Armor() {
	cout << "Удалена броня \"" << name << "\" " << endl;
}

void Equipment::Armor::showStats() {
	cout << "Статистика брони: " << endl;
	cout << "Название: " << name << endl;
	cout << "Тип: " << type << endl;
	cout << "Защита: " << protectionPoints << endl;
}
