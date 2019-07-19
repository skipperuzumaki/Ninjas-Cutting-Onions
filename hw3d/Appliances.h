#pragma once
#include "Interfaces.h"

class Stove : Container
{
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