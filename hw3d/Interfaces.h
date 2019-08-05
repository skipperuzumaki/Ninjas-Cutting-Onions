#pragma once
#include <vector>
#include "Rect.h"
#include <memeory>
//holds all object interaction interfaeces

class SpawnBlock
{
public:
	static const int identifier = 0;
	~SpawnBlock(){}
};

class Interactible
{
public:
	static const int identifier = 1;
	virtual void OnInteract() = 0;
	~Interactible(){}
};

class Pickable
{
public:
	static const int identifier = 2;
	~Pickable(){}
};

class Throwable
{
public:
	static const int identifier = 3;
	Rect extent;
	virtual void OnThrow(std::pair<float, float> start, std::pair<float, float> end) = 0;
	~Throwable(){}
};

class Ingredient
{
public:
	static const int identifier = 4;
	bool Cooked = false;
	bool Ground = false;
	bool Baked = false;
	bool Steamed = false;
	bool Chopped = false;
	bool Grilled = false;
	static const int id;
	~Ingredient(){}
};

class Dish
{
public:
	static const int identifier = 5;
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
	bool Baked = false;
	bool Steamed = false;
	bool Chopped = false;
	bool Grilled = false;
	~Dish(){}
};

class Container
{
public:
	static const int identifier = 6;
	virtual void Accept(Dish* rhs) = 0;
	virtual void Accept(Ingredient* rhs) = 0;
	virtual void Process() = 0;
	virtual std::pair<Dish*,Ingredient*> Unload() = 0;
	~Container(){}
};

class Catchable
{
public:
	static const int identifier = 7;
	Rect extent;
	virtual void OnCatch(Throwable& thro) = 0;
	~Catchable(){}
};
