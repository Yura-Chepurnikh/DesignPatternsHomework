#pragma once

#include <iostream>

struct Enemy
{
	virtual void attack() = 0;
};

class IceEnemy : public Enemy
{
public:
	IceEnemy() = default;

	void attack() override
	{
		std::cout << "Ice enemy attacked: " << m_damage;
		std::cout << '\n';
	}

private:
	int m_damage = 10;
	int m_health = 500;

};

class FireEnemy : public Enemy
{
public:
	FireEnemy() = default;

	void attack() override
	{
		std::cout << "Fire enemy attacked: " << m_damage;
		std::cout << '\n';
	}

private:
	int m_damage = 15;
	int m_health = 400;

};

class AirEnemy : public Enemy
{
public:
	AirEnemy() = default;

	void attack() override
	{
		std::cout << "Air enemy attacked: " << m_damage;
		std::cout << '\n';
	}

private:
	int m_damage = 20;
	int m_health = 300;

};