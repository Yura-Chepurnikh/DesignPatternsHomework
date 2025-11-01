#pragma once

#include "enemy.h"

class Orc : public Enemy
{
public:
	Orc(int p) : power(p) {}

	Enemy* clone() const override
	{
		return new Orc(*this);
	}

	void attack() const override
	{
		std::cout << "Orc attacks with power " << power << "\n";
	}

private:
	int power;
};

class Goblin : public Enemy
{
public:
	Goblin(int s) : speed(s) {}

	Enemy* clone() const override
	{
		return new Goblin(*this);
	}

	void attack() const override
	{
		std::cout << "Goblin attacks with speed " << speed << "\n";
	}

private:
	int speed;
};