#include <iostream>
#include <vector>
#include "Weapon.h"

class Player
{
public:
	Player();
	Player(std::string firstName, std::string lastName, float weigth, int height, int maxWeapons);
	~Player();

	

	inline std::string getPlayerName() const { return (firstName + " " + lastName); }
	inline float getPlayerWeight() const { return weight; }
	inline int getPlayerHeight() const { return height; }
	inline int getPlayerMaxWeapons() const { return maxWeapons; }
	inline std::vector<Weapon*> getPlayerWeapons() const { return weaponSlot; }

	void getPlayerData() const;		//	HELPER function

	static const int getPlayerObjectCount() { return playerObjectCount; }

	void givePlayerWeapon(Weapon& weaponToGive);
	void getPlayerWeaponByName() const;
private:
	static int playerObjectCount;

	std::string firstName;
	std::string lastName;
	float weight;
	int height;
	int maxWeapons;
	std::vector<Weapon*> weaponSlot;
	int currentWeapons;

	
};

