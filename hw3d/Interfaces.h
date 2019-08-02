#pragma once
#include <vector>
#include "Rect.h"
//holds all object interaction interfaeces

class SpawnBlock
{
public:
	~SpawnBlock(){}
};

class Interactible
{
public:
	virtual void OnInteract() = 0;
	~Interactible(){}
};

class Pickable
{
public:
	~Pickable(){}
};

class Throwable
{
public:
	Rect extent;
	virtual void OnThrow(std::pair<float, float> start, std::pair<float, float> end) = 0;
	~Throwable(){}
};

class Ingredient
{
public:
	static const int id;
	~Ingredient(){}
};

class Dish
{
public:
	//TODO add appliance specific cooked
	int id;
	bool operator ==(Dish& rhs) {
		if (rhs.id == id) {
			return true;
		}
		else { return false; }
	}
	std::vector<Ingredient> Ingredents;
	virtual bool add(Dish&) = 0;
	virtual bool add(Ingredient&) = 0;
	virtual std::vector<Ingredient> show() = 0;
	bool Cooked = false;
	bool Ground = false;
	bool Chopped = false;
	bool Grilled = false;
	~Dish(){}
};

class Container
{
public:
	bool Cooked;
	virtual void Accept(Dish* ingredient) = 0;
	virtual void Process() = 0;
	virtual Dish* Unload() = 0;
	~Container(){}
};

class Catchable
{
public:
	Rect extent;
	virtual void OnCatch(Throwable& thro) = 0;
	~Catchable(){}
};
