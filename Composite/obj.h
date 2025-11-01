#pragma once

#include "interface.h"

class Dot : public Graphic
{
public:
	Dot(int x, int y) : x(x), y(y) {}

	void draw() override
	{
		std::cout << "Drawing Dot at (" << x << "," << y << ")\n";
	}


private:
	int x, y;
};

class Circle : public Graphic {

public:
	Circle(int x, int y, int r) : x(x), y(y), r(r) {}

	void draw() override
	{
		std::cout << "Drawing Circle at (" << x << "," << y << ") radius " << r << "\n";
	}
private:
	int x, y, r;
};