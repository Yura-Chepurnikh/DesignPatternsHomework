#pragma once

#include <iostream>
#include <string>

class Enemy
{
public:
	virtual Enemy* clone() const = 0;
	virtual void attack() const = 0;
	virtual ~Enemy() {}
};