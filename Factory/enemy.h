#pragma once


#include <iostream>
#include <string>

class Enemy
{
public:
	virtual void attack() = 0;
	virtual ~Enemy() {}
};

