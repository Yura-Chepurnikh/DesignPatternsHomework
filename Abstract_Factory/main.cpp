#include <iostream>
#include <string>

#include "factory.h"



int main()
{
	WorldFactory* factory = nullptr;
	std::string worldType = "Fire";
	Enemy* enemy = nullptr;

	if (worldType == "Ice")
	    factory = new IceWorldFactory();
	else if (worldType == "Fire")
		factory = new FireWorldFactory();
	else if (worldType == "Air")
		factory = new AirWorldFactory();
	
	if (worldType == "Fire")
	{
		enemy = factory->createEnemy();
		factory->createTree();
		factory->createObstacle();
	}

	enemy->attack();
	delete enemy;
	delete factory;
}