#include <iostream>
#include "Weapon.h"
#include "Player.h"


int main()
{

	Weapon w1("SMG-42", 28);
	Weapon w2("P250", 34, 13, 87);

	w1.getWeaponData();
	w2.getWeaponData();

	Player p1;
	Player p2("Attila", "Gyen", 80, 185, 4);

	std::cout << "-------- weaponSlot teszt ---------" << std::endl;
	Player p3("Ungvari", "Tibor", 180, 210, 6);
	p3.getPlayerData();
	Player p4("Jezus", "Krisztus", 178, 75, -1);
	p4.getPlayerData();
	std::cout << "-------- -------------------- ---------" << std::endl;

	std::cout << "------- Fegyveradas teszt --------" << std::endl;
	Player p5("Fegyvertesztes", "Pista", 200, 80, 4);
	p5.givePlayerWeapon(w2);
	p5.givePlayerWeapon(w2);
	p5.givePlayerWeapon(w1);
	p5.givePlayerWeapon(w2);
	p5.givePlayerWeapon(w2);
	p5.givePlayerWeapon(w2);
	p5.getPlayerData();
	std::cout << "-------- -------------------- ---------" << std::endl;
	
	std::cout << "Weapon object count: " << Weapon::getWeaponObjectCount() << std::endl;
	std::cout << "Player object count: " << Player::getPlayerObjectCount() << std::endl;
		
}
