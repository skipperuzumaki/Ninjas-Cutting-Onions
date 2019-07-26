#pragma once
#include "Interfaces.h"
#include "Object.h"
#include "Graphics.h"
#include <string>

std::vector<std::string> onion;
class Onion : Ingredient, Object
{
	Onion(Graphics& gfx)
		:
		Object(gfx,onion)
	{}
	int id = 0;
};
std::vector<std::string> tomato;
class Tomato :Ingredient, Object
{
	Tomato(Graphics& gfx)
		:
		Object(gfx, tomato)
	{}
	int id = 1;
};
std::vector<std::string> mushroom;
class Mushroom : Ingredient, Object
{
	Mushroom(Graphics& gfx)
		:
		Object(gfx, mushroom)
	{}
	int id = 2;
};
std::vector<std::string> meat;
class Meat : Ingredient, Object
{
	Meat(Graphics& gfx)
		:
		Object(gfx, meat)
	{}
	int id = 3;
};
std::vector<std::string> sausage;
class Sausage : Ingredient, Object
{
	Sausage(Graphics& gfx)
		:
		Object(gfx, sausage)
	{}
	int id = 4;
};
std::vector<std::string> marshmellow;
class Marshmellow : Ingredient, Object
{
	Marshmellow(Graphics& gfx)
		:
		Object(gfx, marshmellow)
	{}
	int id = 5;
};
std::vector<std::string> flour;
class Flour : Ingredient, Object
{
	Flour(Graphics& gfx)
		:
		Object(gfx, flour)
	{}
	int id = 6;
};
std::vector<std::string> rice;
class Rice : Ingredient, Object
{
	Rice(Graphics& gfx)
		:
		Object(gfx, rice)
	{}
	int id = 7;
};
std::vector<std::string> buns;
class Buns : Ingredient, Object
{
	Buns(Graphics& gfx)
		:
		Object(gfx, buns)
	{}
	int id = 8;
};
std::vector<std::string> tortias;
class Tortias : Ingredient, Object
{
	Tortias(Graphics& gfx)
		:
		Object(gfx, tortias)
	{}
	int id = 9;
};
std::vector<std::string> bread;
class Bread : Ingredient, Object
{
	Bread(Graphics& gfx)
		:
		Object(gfx, bread)
	{}
	int id = 10;
};
std::vector<std::string> cucumber;
class Cucumber : Ingredient, Object
{
	Cucumber(Graphics& gfx)
		:
		Object(gfx, cucumber)
	{}
	int id = 11;
};
std::vector<std::string> lettuce;
class Lettuce : Ingredient, Object
{
	Lettuce(Graphics& gfx)
		:
		Object(gfx, lettuce)
	{}
	int id = 12;
};
std::vector<std::string> pickels;
class Pickels : Ingredient, Object
{
	Pickels(Graphics& gfx)
		:
		Object(gfx, pickels)
	{}
	int id = 13;
};
std::vector<std::string> pizza_base;
class Pizza_Base : Ingredient, Object
{
	Pizza_Base(Graphics& gfx)
		:
		Object(gfx, pizza_base)
	{}
	int id = 13;
};
std::vector<std::string> blueberry;
class Blueberry : Ingredient, Object
{
	Blueberry(Graphics& gfx)
		:
		Object(gfx, blueberry)
	{}
	int id = 14;
};
std::vector<std::string> chocolate;
class Chocolate : Ingredient, Object
{
	Chocolate(Graphics& gfx)
		:
		Object(gfx, chocolate)
	{}
	int id = 15;
};
std::vector<std::string> banana;
class Banana : Ingredient, Object
{
	Banana(Graphics& gfx)
		:
		Object(gfx, banana)
	{}
	int id = 16;
};
std::vector<std::string> vanilla;
class Vanilla : Ingredient, Object
{
	Vanilla(Graphics& gfx)
		:
		Object(gfx, vanilla)
	{}
	int id = 17;
};
std::vector<std::string> apple;
class Apple : Ingredient, Object
{
	Apple(Graphics& gfx)
		:
		Object(gfx, apple)
	{}
	int id = 18;
};
std::vector<std::string> orange;
class Orange : Ingredient, Object
{
	Orange(Graphics& gfx)
		:
		Object(gfx, orange)
	{}
	int id = 19;
};
std::vector<std::string> cheese;
class Cheese : Ingredient, Object
{
	Cheese(Graphics& gfx)
		:
		Object(gfx, cheese)
	{}
	int id = 20;
};
std::vector<std::string> olives;
class Olives : Ingredient, Object
{
	Olives(Graphics& gfx)
		:
		Object(gfx, olives)
	{}
	int id = 21;
};
std::vector<std::string> egg;
class Egg : Ingredient, Object
{
	Egg(Graphics& gfx)
		:
		Object(gfx, egg)
	{}
	int id = 22;
};
std::vector<std::string> chick_peas;
class Chick_Peas : Ingredient, Object
{
	Chick_Peas(Graphics& gfx)
		:
		Object(gfx, chick_peas)
	{}
	int id = 23;
};
std::vector<std::string> fish;
class Fish : Ingredient, Object
{
	Fish(Graphics& gfx)
		:
		Object(gfx, fish)
	{}
	int id = 24;
};
std::vector<std::string> seaweed;
class SeaWeed : Ingredient, Object
{
	SeaWeed(Graphics& gfx)
		:
		Object(gfx, seaweed)
	{}
	int id = 25;
};
std::vector<std::string> octopus;
class Octopus : Ingredient, Object
{
	Octopus(Graphics& gfx)
		:
		Object(gfx, octopus)
	{}
	int id = 26;
};
class Unviable : Ingredient, Object
{
	int id = std::numeric_limits<int>::max();
};