#pragma once
#include <vector>
//holds all object interaction interfaeces

class SpawnBlock
{
	virtual bool Intersecting(std::pair<float, float> start, std::pair<float, float> end) = 0;
	~SpawnBlock(){}
};

class Interactible
{
	virtual void OnInteract() = 0;
	~Interactible(){}
};

class Throwable
{
	virtual void OnThrow(std::pair<float, float> start, std::pair<float, float> end) = 0;
	~Throwable(){}
};

class Ingredient
{
	~Ingredient(){}
};

class Dish
{
	std::vector<Ingredient> Ingridents;
	virtual bool add(Dish&) = 0;
	virtual std::vector<Ingredient> show() = 0;
};

class Container
{
	virtual void Accept(Dish& ingredient) = 0;
	virtual void Process() = 0;
	virtual std::pair<Dish,bool> Unload() = 0;
	~Container(){}
};