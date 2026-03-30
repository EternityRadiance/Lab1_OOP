#include "equipment.h"

Equipment::Equipment() : name(" "), price(0) {}

Equipment::Equipment(string name, int price) : name(name), price(price) {}

Equipment::~Equipment() {
	cout << "Удалён \"" << name << "\" из инвентаря" << endl;
}

string Equipment::getName() const { return name; }
int Equipment::getPrice() const { return price; }

void Equipment::setName(string name) { this->name = name; }
void Equipment::setPrice(int price) { this->price = price; }

void Equipment::buyItem(int buyPrice) {
	cout << "Куплен \"" << name << "\" за " << buyPrice << endl;
}

void Equipment::sellItem(int sellPrice) {
	cout << "Продан \"" << name << "\" за " << sellPrice << endl;
}

void Equipment::equipItem() {
	cout << "Экипирован \"" << name << "\" предмет" << endl;
}