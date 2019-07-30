#pragma once
#include "Interfaces.h"
#include <vector>
#include "Utils.h"

//TODO Add sprites foe cue cards

class Onion_Soup :Dish
{
	Onion_Soup() { id = 0; }
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Lettuce_Cheese_Burger :Dish
{
	Lettuce_Cheese_Burger() { id = 15; }
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Lettuce_Cheese_Burger :Dish
{
	Meat_Lettuce_Cheese_Burger() { id = 16; }
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Cucumber_Cheese_Burger :Dish
{
	Meat_Cucumber_Cheese_Burger() { id = 17; }
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Pickle_Cheese_Burger :Dish
{
	Meat_Pickle_Cheese_Burger() { id = 18; }
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
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
	static const std::vector<Ingredient> Needed;
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			if (Utils::has(Needed, temp.at(i)) && (!(Utils::has(Ingredents, temp.at(i))))) {
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		if (Utils::has(Needed, rhs) && (!(Utils::has(Ingredents, rhs)))) {
			Ingredents.push_back(rhs);
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};