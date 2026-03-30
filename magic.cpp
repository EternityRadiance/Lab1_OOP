#include "magic.h"

Equipment::Weapon::Magic::Magic() : Weapon("", "", 0), name(" "), manaCost(0) {}

Equipment::Weapon::Magic::Magic(string name, int manaCost) : Weapon(name, "Магическое", 0), name(name), manaCost(manaCost) {}

Equipment::Weapon::Magic::Magic(string name) : Weapon(name, "Магическое", 0), name(name), manaCost(0) {}

Equipment::Weapon::Magic::~Magic() {
	cout << "Удалено магическое оружие: " << name << endl;
}

void Equipment::Weapon::Magic::learnSpell(string spellName){
	learnedSpells.push_back(spellName);
	cout << "Изучено заклинание \"" << spellName << "\" " << endl;
}

void Equipment::Weapon::Magic::castSpell(string spellName) {
	bool found = false;
	for (const auto& spell : learnedSpells) {
		if (spell == spellName) {
			found = true;
			break;
		}
	}

	if (found) {
		cout << "Применено заклинание \"" << spellName << "\" (стоимость маны: " << manaCost << " )" << endl;
	}
	else {
		cout << "Заклинание \"" << spellName << "\" не изучено!" << endl;
	}
}

void Equipment::Weapon::Magic::showStats() {
	cout << "Статистика магического оружия: " << endl;
	cout << "Название: " << name << endl;
	cout << "Стоимость маны: " << manaCost << endl;
}

void Equipment::Weapon::Magic::showLearnedSpells() {
	cout << "Изученные заклинания: " << endl;
	if (learnedSpells.empty()) {
		cout << "Нет изученных заклинаний" << endl;
	}
	else {
		for (const auto& spell : learnedSpells) {
			cout << "- " << spell << endl;
		}
	}
}
