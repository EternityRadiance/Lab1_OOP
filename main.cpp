#include <iostream>
#include "equipment.h"
#include "weapon.h"
#include "armor.h"
#include "rifles.h"
#include "magic.h"

using namespace std;

void testEquipment() {
	cout << "Equipment" << endl;
	Equipment* equip = new Equipment::Weapon("Меч", "Холодное", 50);
	equip->showStats();
	equip->buyItem(1000);
	equip->equipItem();
	equip->sellItem(800);
	delete equip;
	cout << endl;
}

void testWeapon() {
	cout << "Weapon" << endl;
	Equipment::Weapon* weapon = new Equipment::Weapon("Длинный меч", "Холодное оружие", 50);
	weapon->showStats();
	weapon->buyItem(2500);
	weapon->equipItem();
	weapon->sellItem(2000);
	delete weapon;
	cout << endl;
}

void testRifles() {
	cout << "Rifles" << endl;
	Equipment::Weapon::Rifles* rifle = new Equipment::Weapon::Rifles("AK-47", 30);
	rifle->showStats();
	rifle->shoot();
	rifle->reload();
	rifle->shoot();
	rifle->unload();
	rifle->buyItem(15000);
	rifle->equipItem();
	rifle->sellItem(12000);
	delete rifle;
	cout << endl;
}

void testMagic() {
	cout << "Magic" << endl;
	Equipment::Weapon::Magic* magic = new Equipment::Weapon::Magic("Посох мага", 50);
	magic->showStats();
	magic->learnSpell("Огненный шар");
	magic->learnSpell("Ледяная стрела");
	magic->showLearnedSpells();
	magic->castSpell("Огненный шар");
	magic->buyItem(5000);
	magic->equipItem();
	magic->sellItem(4000);
	delete magic;
	cout << endl;
}

void testArmor() {
	cout << "Armor" << endl;
	Equipment::Armor* armor = new Equipment::Armor("Кольчуга", "Тяжелая броня", 100);
	armor->showStats();
	armor->buyItem(3000);
	armor->equipItem();
	armor->sellItem(2500);
	delete armor;
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "RU");
	
	//testEquipment();
	//testWeapon();
	//testRifles();
	//testMagic();
	//testArmor();

	////Equipment* test = new Equipment("123",23);

	//Equipment* items[3];
	//items[0] = new Equipment::Weapon("Копьё", "Холодное", 40);
	//items[1] = new Equipment::Armor("Щит", "Легкая", 50);
	//items[2] = new Equipment::Weapon::Rifles("Винтовка", 20);
	//
	//for (int i = 0; i < 3; i++) {
	//	items[i]->showStats();
	//	cout << endl;
	//}
	//
	//for (int i = 0; i < 3; i++) {
	//	delete items[i];
	//}

	Equipment* equipment[12];


	equipment[0] = new Equipment::Armor();
	equipment[1] = new Equipment::Armor("Стальной шлем", "Шлем", 10);
	equipment[2] = new Equipment::Armor("Шлем", 10);

	equipment[3] = new Equipment::Weapon();
	equipment[4] = new Equipment::Weapon("Стальной меч", 20);
	equipment[5] = new Equipment::Weapon("Катана", "Катаны", 25);

	equipment[6] = new Equipment::Weapon::Rifles();
	equipment[7] = new Equipment::Weapon::Rifles("AK-47", 30);
	equipment[8] = new Equipment::Weapon::Rifles("Деревянный лук", "Луки", 1);

	equipment[9] = new Equipment::Weapon::Magic();
	equipment[10] = new Equipment::Weapon::Magic("Волшебная палочка", 20);
	equipment[11] = new Equipment::Weapon::Magic("Посох колдуна");

	equipment[7]->equipItem();
	equipment[7]->showStats();
	equipment[7]->buyItem(500);
	equipment[7]->sellItem(400);
	static_cast<Equipment::Weapon::Rifles*>(equipment[7])->reload();
	dynamic_cast<Equipment::Weapon::Rifles*>(equipment[7])->reload();
	((Equipment::Weapon::Rifles*)equipment[7])->reload();
	((Equipment::Weapon::Rifles*)equipment[7])->shoot();
	((Equipment::Weapon::Rifles*)equipment[7])->unload();
	
	return 0;
}
