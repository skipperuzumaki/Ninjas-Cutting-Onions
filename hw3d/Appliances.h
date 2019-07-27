#pragma once
#include "Interfaces.h"
#include "Object.h"
#include <string>
#include <vector>
#include "Graphics.h"

//TODO add appliance specific cooked

std::vector<std::string> stove;
class Stove : Container, Object
{
	Stove(Graphics& gfx)
		:
		Object(gfx,stove)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Cooked = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> oven;
class Oven : Container, Object
{
	Oven(Graphics& gfx)
		:
		Object(gfx, oven)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Cooked = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> steamer;
class Steamer : Container, Object
{
	Steamer(Graphics& gfx)
		:
		Object(gfx, steamer)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Cooked = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> grinder;
class Grinder : Container, Object
{
	Grinder(Graphics& gfx)
		:
		Object(gfx, grinder)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Ground = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> lawn_mower;
class Lawn_Mower : Container, Object
{
	Lawn_Mower(Graphics& gfx)
		:
		Object(gfx, lawn_mower)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Chopped = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> guillotine;
class Guillotine : Container, Object
{
	Guillotine(Graphics& gfx)
		:
		Object(gfx, guillotine)
	{}
	static std::vector<int > Viable_Stuff;///TODO add viable ingredients and dishes
	Dish* Curritem;
	virtual void Accept(Dish* ingredient) override
	{
		Curritem = ingredient;
		Process();
	}
	virtual void Process() override
	{
		bool Spoiled = true;
		auto ings = Curritem->show();
		for (int i = 0; i < ings.size(); i++) {
			auto id = ings.at(i).id;
			bool Problem = true;
			for (int j = 0; j < Viable_Stuff.size(); j++) {
				if (Viable_Stuff.at(j) == id) {
					Problem = false;
				}
			}
			if (Problem) { Spoiled = true; }
		}
		Curritem->Chopped = true;
		//TODO add spoiled food
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};