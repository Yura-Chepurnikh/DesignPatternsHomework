#include "draw.h"

int main()
{
	Dot* dot1 = new Dot(1, 2);
	Dot* dot2 = new Dot(3, 4);
	Circle* circle = new Circle(5, 6, 10);

	CompoundGraphic* compound = new CompoundGraphic();
	compound->add(dot1);
	compound->add(dot2);
	compound->add(circle);
	compound->draw();

	delete compound;
}