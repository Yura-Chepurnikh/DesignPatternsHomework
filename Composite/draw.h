#pragma once

#include "obj.h"

class CompoundGraphic : public Graphic
{
public:
	void add(Graphic* g) { children.push_back(g); }

	void draw() override
	{
		std::cout << "Drawing CompoundGraphic with children:\n";
		for (auto* g : children)
		g->draw();
	}

	~CompoundGraphic()
	{
		for (auto* g : children) delete g;
	}
private:
	std::vector<Graphic*> children;
};