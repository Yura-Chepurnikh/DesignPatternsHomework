#pragma once

#include "pizza.h"

struct PizzaBuilder
{
	virtual void addDough() = 0;
	virtual void addSauce() = 0;
	virtual void addTopping() = 0;
	virtual Pizza* getPizza() = 0;
	virtual ~PizzaBuilder() {}
};



class MargheritaBuilder : public PizzaBuilder
{
private:
	Pizza* pizza;

public:
	MargheritaBuilder()
	{
		pizza = new Pizza();
	}

	void addDough() override
	{
		pizza->ingredients.push_back("Thin dough"); 
	}

	void addSauce() override 
	{
		pizza->ingredients.push_back("Tomato sauce"); 
	}

	void addTopping() override
	{
		pizza->ingredients.push_back("Cheese"); 
	}

	Pizza* getPizza() override
	{
		return pizza;
	}
};

class PepperoniBuilder : public PizzaBuilder
{
private:
	Pizza* pizza;

public:
	PepperoniBuilder()
	{
		pizza = new Pizza();
	}

	void addDough() override
	{
		pizza->ingredients.push_back("Thin dough"); 
	}

	void addSauce() override 
	{
		pizza->ingredients.push_back("Tomato sauce"); 
	}

	void addTopping() override
	{
		pizza->ingredients.push_back("Cheese"); 
	}

	Pizza* getPizza() override
	{
		return pizza;
	}
};

class Cook
{
public:
	void makePizza(PizzaBuilder* builder)
	{
		builder->addDough();
		builder->addSauce();
		builder->addTopping();
	}
};