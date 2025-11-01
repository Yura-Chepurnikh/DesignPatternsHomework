#pragma once

#include <iostream>
#include <string>
#include <vector>


class Pizza
{
public:

	void show()
	{
		std::cout << "Pizza with: ";
		for (auto& ing : ingredients)
			std::cout << ing << " ";
		std::cout << "\n";
	}

	std::vector<std::string> ingredients;
};

