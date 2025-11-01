#pragma once

#include "enemy.h"
#include "type.h"

class EnemyFactory
{
public:
	virtual Enemy* createEnemy() = 0;
	virtual ~EnemyFactory() {}
};

class OrcFactory : public EnemyFactory
{
public:
	Enemy* createEnemy() override
	{
		return new Orc();
	}
};

class GoblinFactory : public EnemyFactory
{
public:
	Enemy* createEnemy() override
	{
		return new Goblin();
	}
};
