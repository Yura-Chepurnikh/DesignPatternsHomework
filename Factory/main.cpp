#include "factory.h"

int main()
{
	EnemyFactory* factory = nullptr;
	std::string type = "Orc";
	
	if (type == "Orc")
		factory = new OrcFactory();
	else
		factory = new GoblinFactory();

	Enemy* enemy = factory->createEnemy();
	enemy->attack();

	delete enemy;
	delete factory;
}