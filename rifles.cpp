#include "rifles.h"

Equipment::Weapon::Rifles::Rifles() : Weapon("", "", 0), name(" "), ammo(0), maxAmmo(0) {}

Equipment::Weapon::Rifles::Rifles(string name, int maxAmmo) : Weapon(name, "Огнестрельное", 0), name(name), ammo(maxAmmo), maxAmmo(maxAmmo) {}

Equipment::Weapon::Rifles::Rifles(string name, string type, int maxAmmo) : Weapon(name, type, 0), name(name), maxAmmo(maxAmmo) {}

Equipment::Weapon::Rifles::~Rifles() {
	cout << "Удалена винтовка: " << name << endl;
}

string Equipment::Weapon::Rifles::getName() const { return name; }
int Equipment::Weapon::Rifles::getAmmo() const { return ammo; }
int Equipment::Weapon::Rifles::getMaxAmmo() const { return maxAmmo; }

void Equipment::Weapon::Rifles::reload() {
	ammo = maxAmmo;
	cout << name << " перезаряжена (полная)" << endl;
}

void Equipment::Weapon::Rifles::shoot() {
	if (ammo > 0) {
		ammo--;
		cout << name << " выстрел. Осталось патронов: " << ammo << endl;
	}
	else {
		cout << name << ": Нет патронов. Перезарядите." << endl;
	}
}

void Equipment::Weapon::Rifles::unload() {
	ammo = 0;
	cout << name << " разряжена (пустая)" << endl;
}

void Equipment::Weapon::Rifles::showStats() {
	cout << "Статистика винтовки: " << endl;
	cout << "Название: " << name << endl;
	cout << "Патроны: " << ammo << "/" << maxAmmo << endl;
}
