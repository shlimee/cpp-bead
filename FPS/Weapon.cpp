#include "Weapon.h"

int Weapon::weaponObjectCount = 0;

Weapon::Weapon(std::string name, double damage, int ammo, int accuracy)
{
	this->name = name;
	this->damage = damage;
	this->maxAmmo = ammo;
	this->accuracy = accuracy;

	weaponObjectCount++;
}

Weapon::~Weapon()
{

}


void Weapon::setDamage(int amount)
{
	if (amount < 0) return;
	this->damage = amount;
}

void Weapon::setAmmo(int amount)
{
	if (amount < 0) return;
	this->maxAmmo = amount;
}

void Weapon::setAccuracy(int amount)
{
	if (amount < 0) return;
	this->accuracy = amount;
}

void Weapon::getWeaponData() const
{
	std::cout << getName().c_str() << " weapon's data: " << std::endl;
	std::cout << "Damage: " << getDamage() << std::endl;
	std::cout << "Max. ammo: " << getAmmo() << std::endl;
	std::cout << "Accuracy: " << getAccuracy() << std::endl << std::endl;
}