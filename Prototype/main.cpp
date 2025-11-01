#include "type.h"

int main()
{
	Orc* orc1 = new Orc(100);
	Goblin* gob1 = new Goblin(50);

	Enemy* orc2 = orc1->clone();
	Enemy* gob2 = gob1->clone();

	orc1->attack();
	orc2->attack();

	gob1->attack();
	gob2->attack();

	delete orc1;
	delete orc2;
	delete gob1;
	delete gob2;
}