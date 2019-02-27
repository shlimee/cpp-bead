#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
public:
	Weapon(std::string name, double damage, int ammo = 0, int accuracy = 0);
	~Weapon();

	//	GETTER methods
	inline std::string getName() const { return name; }
	inline double getDamage() const { return damage; }
	inline int getAmmo() const { return maxAmmo;  }
	inline int getAccuracy() const { return accuracy; }

	void getWeaponData() const;		//	HELPER function

	//	SETTER methods
	void setDamage(int amount);
	void setAmmo(int amount);
	void setAccuracy(int amount);

	

	static const int getWeaponObjectCount() { return weaponObjectCount; }
private:
	std::string name;
	double damage;
	int maxAmmo;
	int accuracy;

	static int weaponObjectCount;
	
};

#endif