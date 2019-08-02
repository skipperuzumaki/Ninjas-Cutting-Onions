#pragma once
#include "Interfaces.h"
#include "Turret.h"
#include <vector>
#include "Ingredients.h"
#include "Utils.h"

//TODO Add sprites foe cue cards

class Onion_Soup :Dish
{
	Onion_Soup() { id = 0; }
	const std::vector<int> Needed = { Onion::id,Water::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Soup :Dish
{
	Mushroom_Soup() { id = 1; }
	const std::vector<int> Needed = { Mushroom::id,Water::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Tomato_Soup :Dish
{
	Tomato_Soup() { id = 2; }
	const std::vector<int> Needed = { Tomato::id,Water::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Chocolate_Milkshake :Dish
{
	Chocolate_Milkshake() { id = 3; }
	const std::vector<int> Needed = { Chocolate::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Marshmellow_Milkshake :Dish
{
	Marshmellow_Milkshake() { id = 4; }
	const std::vector<int> Needed = { Marshmellow::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Banana_Milkshake :Dish
{
	Banana_Milkshake() { id = 5; }
	const std::vector<int> Needed = { Banana::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Vanilla_Milkshake :Dish
{
	Vanilla_Milkshake() { id = 6; }
	const std::vector<int> Needed = { Vanilla::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Onion_Pizza :Dish
{
	Onion_Pizza() { id = 7; }
	const std::vector<int> Needed{ Onion::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Olive_Pizza :Dish
{
	Olive_Pizza() { id = 8; }
	const std::vector<int> Needed = { Olives::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Pizza :Dish
{
	Mushroom_Pizza() { id = 9; }
	const std::vector<int> Needed = { Mushroom::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Onion_Pizza :Dish
{
	Mushroom_Onion_Pizza() { id = 10; }
	const std::vector<int> Needed = { Mushroom::id,Onion::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Olive_Pizza :Dish
{
	Mushroom_Olive_Pizza() { id = 11; }
	const std::vector<int> Needed = { Mushroom::id,Olives::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Onion_Olive_Pizza :Dish
{
	Onion_Olive_Pizza() { id = 12; }
	const std::vector<int> Needed = { Onion::id,Olives::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Pizza :Dish
{
	Meat_Pizza() { id = 13; }
	const std::vector<int> Needed = { Meat::id,Cheese::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Burger :Dish
{
	Meat_Burger() { id = 14; }
	const std::vector<int> Needed = { Meat::id,Buns::id,Cheese::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Lettuce_Burger :Dish
{
	Lettuce_Burger() { id = 15; }
	const std::vector<int> Needed = { Lettuce::id,Cheese::id,Buns::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Lettuce_Burger :Dish
{
	Meat_Lettuce_Burger() { id = 16; }
	const std::vector<int> Needed = { Meat::id,Lettuce::id,Cheese::id,Buns::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Cucumber_Burger :Dish
{
	Meat_Cucumber_Burger() { id = 17; }
	const std::vector<int> Needed = { Meat::id,Cucumber::id,Buns::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Pickle_Burger :Dish
{
	Meat_Pickle_Burger() { id = 18; }
	const std::vector<int> Needed = { Meat::id,Pickels::id,Cheese::id,Buns::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Total_Burger :Dish
{
	Total_Burger() { id = 19; }
	const std::vector<int> Needed = { Meat::id,Lettuce::id,Pickels::id,Cucumber::id,Buns::id,Mayonaise::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Total_Pizza :Dish
{
	Total_Pizza() { id = 20; }
	const std::vector<int> Needed = { Meat::id,Cheese::id,Olives::id,Onion::id,Tomato::id,Pizza_Base::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Cheese_Sandwitch :Dish
{
	Cheese_Sandwitch() { id = 20; }
	const std::vector<int> Needed = { Cheese::id,Bread::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Sandwitch :Dish
{
	Meat_Sandwitch() { id = 21; }
	const std::vector<int> Needed = { Meat::id,Cheese::id,Bread::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Cucumber_Sandwitch :Dish
{
	Cucumber_Sandwitch() { id = 22; }
	const std::vector<int> Needed = { Cucumber::id,Bread::id,Mayonaise::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Total_Sandwitch :Dish
{
	Total_Sandwitch() { id = 23; }
	const std::vector<int> Needed = { Meat::id,Cheese::id,Lettuce::id,Mayonaise::id,Ketchup::id,Bread::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Apple_Pie :Dish
{
	Apple_Pie() { id = 24; }
	const std::vector<int> Needed = { Apple::id,Vanilla::id,Flour::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i).id) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs.id) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};