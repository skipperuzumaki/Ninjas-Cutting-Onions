#pragma once
#include "Interfaces.h"
#include "Object.h"
#include "Graphics.h"
#include <string>

//TODO Add sprites for cue cards

std::vector<std::string> onion;
class Onion : Ingredient, Object
{
public:
	Onion(Graphics& gfx)
		:
		Object(gfx,onion)
	{}
	static const int id = 0;
};
std::vector<std::string> tomato;
class Tomato :Ingredient, Object
{
public:
	Tomato(Graphics& gfx)
		:
		Object(gfx, tomato)
	{}
	static const int id = 1;
};
std::vector<std::string> mushroom;
class Mushroom : Ingredient, Object
{
public:
	Mushroom(Graphics& gfx)
		:
		Object(gfx, mushroom)
	{}
	static const int id = 2;
};
std::vector<std::string> meat;
class Meat : Ingredient, Object
{
public:
	Meat(Graphics& gfx)
		:
		Object(gfx, meat)
	{}
	static const int id = 3;
};
std::vector<std::string> sausage;
class Sausage : Ingredient, Object
{
public:
	Sausage(Graphics& gfx)
		:
		Object(gfx, sausage)
	{}
	static const int id = 4;
};
std::vector<std::string> marshmellow;
class Marshmellow : Ingredient, Object
{
public:
	Marshmellow(Graphics& gfx)
		:
		Object(gfx, marshmellow)
	{}
	static const int id = 5;
};
std::vector<std::string> flour;
class Flour : Ingredient, Object
{
public:
	Flour(Graphics& gfx)
		:
		Object(gfx, flour)
	{}
	static const int id = 6;
};
std::vector<std::string> rice;
class Rice : Ingredient, Object
{
public:
	Rice(Graphics& gfx)
		:
		Object(gfx, rice)
	{}
	static const int id = 7;
};
std::vector<std::string> buns;
class Buns : Ingredient, Object
{
public:
	Buns(Graphics& gfx)
		:
		Object(gfx, buns)
	{}
	static const int id = 8;
};
std::vector<std::string> tortias;
class Tortias : Ingredient, Object
{
public:
	Tortias(Graphics& gfx)
		:
		Object(gfx, tortias)
	{}
	static const int id = 9;
};
std::vector<std::string> bread;
class Bread : Ingredient, Object
{
public:
	Bread(Graphics& gfx)
		:
		Object(gfx, bread)
	{}
	static const int id = 10;
};
std::vector<std::string> cucumber;
class Cucumber : Ingredient, Object
{
public:
	Cucumber(Graphics& gfx)
		:
		Object(gfx, cucumber)
	{}
	static const int id = 11;
};
std::vector<std::string> lettuce;
class Lettuce : Ingredient, Object
{
public:
	Lettuce(Graphics& gfx)
		:
		Object(gfx, lettuce)
	{}
	static const int id = 12;
};
std::vector<std::string> pickels;
class Pickels : Ingredient, Object
{
public:
	Pickels(Graphics& gfx)
		:
		Object(gfx, pickels)
	{}
	static const int id = 13;
};
std::vector<std::string> pizza_base;
class Pizza_Base : Ingredient, Object
{
public:
	Pizza_Base(Graphics& gfx)
		:
		Object(gfx, pizza_base)
	{}
	static const int id = 13;
};
std::vector<std::string> blueberry;
class Blueberry : Ingredient, Object
{
public:
	Blueberry(Graphics& gfx)
		:
		Object(gfx, blueberry)
	{}
	static const int id = 14;
};
std::vector<std::string> chocolate;
class Chocolate : Ingredient, Object
{
public:
	Chocolate(Graphics& gfx)
		:
		Object(gfx, chocolate)
	{}
	static const int id = 15;
};
std::vector<std::string> banana;
class Banana : Ingredient, Object
{
public:
	Banana(Graphics& gfx)
		:
		Object(gfx, banana)
	{}
	static const int id = 16;
};
std::vector<std::string> vanilla;
class Vanilla : Ingredient, Object
{
public:
	Vanilla(Graphics& gfx)
		:
		Object(gfx, vanilla)
	{}
	static const int id = 17;
};
std::vector<std::string> apple;
class Apple : Ingredient, Object
{
public:
	Apple(Graphics& gfx)
		:
		Object(gfx, apple)
	{}
	static const int id = 18;
};
std::vector<std::string> orange;
class Orange : Ingredient, Object
{
public:
	Orange(Graphics& gfx)
		:
		Object(gfx, orange)
	{}
	static const int id = 19;
};
std::vector<std::string> cheese;
class Cheese : Ingredient, Object
{
public:
	Cheese(Graphics& gfx)
		:
		Object(gfx, cheese)
	{}
	static const int id = 20;
};
std::vector<std::string> olives;
class Olives : Ingredient, Object
{
public:
	Olives(Graphics& gfx)
		:
		Object(gfx, olives)
	{}
	static const int id = 21;
};
std::vector<std::string> egg;
class Egg : Ingredient, Object
{
public:
	Egg(Graphics& gfx)
		:
		Object(gfx, egg)
	{}
	static const int id = 22;
};
std::vector<std::string> chick_peas;
class Chick_Peas : Ingredient, Object
{
public:
	Chick_Peas(Graphics& gfx)
		:
		Object(gfx, chick_peas)
	{}
	static const int id = 23;
};
std::vector<std::string> fish;
class Fish : Ingredient, Object
{
public:
	Fish(Graphics& gfx)
		:
		Object(gfx, fish)
	{}
	static const int id = 24;
};
std::vector<std::string> seaweed;
class SeaWeed : Ingredient, Object
{
public:
	SeaWeed(Graphics& gfx)
		:
		Object(gfx, seaweed)
	{}
	static const int id = 25;
};
std::vector<std::string> octopus;
class Octopus : Ingredient, Object
{
public:
	Octopus(Graphics& gfx)
		:
		Object(gfx, octopus)
	{}
	static const int id = 26;
};
std::vector<std::string> milk;
class Milk : Ingredient, Object
{
public:
	Milk(Graphics& gfx)
		:
		Object(gfx, milk)
	{}
	static const int id = 26;
};
class Unviable : Ingredient, Object
{
public:
	static const int id = std::numeric_limits<int>::max();
};