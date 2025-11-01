#pragma once

#include "enemy.h"

class Orc : public Enemy
{
public:
	void attack() override
	{
		std::cout << "Orc attacks with axe!\n";
	}
};

class Goblin : public Enemy {
public:
	void attack() override
	{
		std::cout << "Goblin attacks with dagger!\n";
	}
};