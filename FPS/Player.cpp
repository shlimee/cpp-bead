
#include "Player.h"

int Player::playerObjectCount = 0;

Player::Player()
{
	this->firstName  = "Unknown";
	this->lastName   = "Soldier";
	this->weight     = 0;
	this->height     = 0;
	this->maxWeapons = 3;
	this->currentWeapons = 0;

	weaponSlot.resize(maxWeapons);
	Player::playerObjectCount++;
}

Player::Player(std::string firstName, std::string lastName, float weight, int height, int maxWeapons)
{
	weaponSlot.resize(1);
	this->firstName = firstName;
	this->lastName  = lastName;
	this->weight    = weight;
	this->height    = height;
	this->currentWeapons = 0;
	
	if (1 <= maxWeapons && maxWeapons <= 5)
		this->maxWeapons = maxWeapons;
	else
		this->maxWeapons = 3;

	weaponSlot.resize(this->maxWeapons);
	playerObjectCount++;
}

Player::~Player()
{
}

void Player::givePlayerWeapon(Weapon& weaponToGive)
{
	if (currentWeapons < maxWeapons)
	{
		weaponSlot.push_back(&weaponToGive);
		currentWeapons++;
	}
	else
	{
		std::cout << "ERROR: " << getPlayerName().c_str() << " cannot hold more weapons than " << getPlayerMaxWeapons() << "!" << std::endl;
	}
}

void Player::getPlayerWeaponByName() const
{
	for (Weapon *w : weaponSlot)
	{
		if(w != nullptr)
			std::cout << (*w).getName().c_str() << std::endl;
	}
}


//	HELPER
void Player::getPlayerData() const
{
	std::cout << getPlayerName().c_str() << "'s data: " << std::endl;
	std::cout << "Weight: " << getPlayerWeight() << std::endl;
	std::cout << "Height" << getPlayerHeight() << std::endl;
	std::cout << "Max. weapons: " << getPlayerMaxWeapons() << std::endl;
	std::cout << "Weapons: " << std::endl;
	getPlayerWeaponByName();
	std::cout << std::endl << std::endl;
}