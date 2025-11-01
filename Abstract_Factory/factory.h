#pragma once

#include "enemy.h"

#include <iostream>

struct WorldFactory
{

	virtual void createTree() = 0;
	virtual void createObstacle() = 0;
	virtual Enemy* createEnemy() = 0;
};


class IceWorldFactory : public WorldFactory
{
public:
	Enemy* createEnemy() override
	{
		std::cout << "Created Ice enemy\n";
		return new IceEnemy();
	}

	void createTree() override
	{
		std::cout << "Created Ice tree\n";
	}

	void createObstacle() override
	{
		std::cout << "Created Ice obstacle\n";
	}


private:

};

class FireWorldFactory : public WorldFactory
{
public:
	Enemy* createEnemy() override
	{
		std::cout << "Created Fire enemy\n";
		return new FireEnemy();
	}

	void createTree() override
	{
		std::cout << "Created Fire tree\n";
	}

	void createObstacle() override
	{
		std::cout << "Created Fire obstacle\n";
	}

private:

};

class AirWorldFactory : public WorldFactory
{
public:

	Enemy* createEnemy() override
	{
		std::cout << "Created Air enemy\n";
		return new AirEnemy();
	}

	void createTree() override
	{
		std::cout << "Created Air tree\n";
	}

	void createObstacle() override
	{
		std::cout << "Created Air obstacle\n";
	}

private:

};