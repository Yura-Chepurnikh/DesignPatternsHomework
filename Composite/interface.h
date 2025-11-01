#pragma once

#include <iostream>
#include <vector>
#include <string>

struct Graphic
{
	virtual void draw() = 0;
	virtual ~Graphic() {}
};