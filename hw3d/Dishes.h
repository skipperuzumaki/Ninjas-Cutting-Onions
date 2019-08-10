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
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch(temp.at(i).id)
			{
			case Onion::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Water::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Onion::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Water::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Soup :Dish
{
	Mushroom_Soup() { id = 1; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Mushroom::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Water::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Mushroom::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Water::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Tomato_Soup :Dish
{
	Tomato_Soup() { id = 2; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Tomato::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Water::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Tomato::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Water::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Chocolate_Milkshake :Dish
{
	Chocolate_Milkshake() { id = 3; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Chocolate::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Chocolate::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Marshmellow_Milkshake :Dish
{
	Marshmellow_Milkshake() { id = 4; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Marshmellow::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch(rhs.id)
		{
			case Marshmellow::id:
				Ingredents.push_back(rhs);
				break;
			case Milk::id:
				Ingredents.push_back(rhs);
				break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Banana_Milkshake :Dish
{
	Banana_Milkshake() { id = 5; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Banana::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Banana::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Vanilla_Milkshake :Dish
{
	Vanilla_Milkshake() { id = 6; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Onion_Pizza :Dish
{
	Onion_Pizza() { id = 7; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Onion::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Onion::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Olive_Pizza :Dish
{
	Olive_Pizza() { id = 8; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Olives::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Olives::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Pizza :Dish
{
	Mushroom_Pizza() { id = 9; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Mushroom::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Mushroom::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Onion_Pizza :Dish
{
	Mushroom_Onion_Pizza() { id = 10; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Mushroom::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Onion::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Mushroom::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Onion::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Mushroom_Olive_Pizza :Dish
{
	Mushroom_Olive_Pizza() { id = 11; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Mushroom::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Olives::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Mushroom::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Olives::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Onion_Olive_Pizza :Dish
{
	Onion_Olive_Pizza() { id = 12; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Onion::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Olives::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Onion::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Olives::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Pizza :Dish
{
	Meat_Pizza() { id = 13; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Burger :Dish
{
	Meat_Burger() { id = 14; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Lettuce_Burger :Dish
{
	Lettuce_Burger() { id = 15; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Lettuce::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Lettuce::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Lettuce_Burger :Dish
{
	Meat_Lettuce_Burger() { id = 16; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Lettuce::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Lettuce::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Cucumber_Burger :Dish
{
	Meat_Cucumber_Burger() { id = 17; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cucumber::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch(rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cucumber::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Pickle_Burger :Dish
{
	Meat_Pickle_Burger() { id = 18; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pickels::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pickels::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
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
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pickels::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Lettuce::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cucumber::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Buns::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Mayonaise::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pickels::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Lettuce::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cucumber::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Buns::id:
			Ingredents.push_back(rhs);
			break;
		case Mayonaise::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Total_Pizza :Dish
{
	Total_Pizza() { id = 20; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Olives::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Onion::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Tomato::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Pizza_Base::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Olives::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Onion::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Tomato::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Pizza_Base::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Cheese_Sandwitch :Dish
{
	Cheese_Sandwitch() { id = 20; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Bread::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Bread::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Meat_Sandwitch :Dish
{
	Meat_Sandwitch() { id = 21; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Bread::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Bread::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Cucumber_Sandwitch :Dish
{
	Cucumber_Sandwitch() { id = 22; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Cucumber::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Mayonaise::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Bread::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Bread::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Mayonaise::id:
			Ingredents.push_back(rhs);
			break;
		case Cucumber::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Total_Sandwitch :Dish
{
	Total_Sandwitch() { id = 23; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Meat::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Lettuce::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Cheese::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Mayonaise::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Ketchup::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Bread::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Meat::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Lettuce::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Cheese::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Mayonaise::id:
			Ingredents.push_back(rhs);
			break;
		case Ketchup::id:
			Ingredents.push_back(rhs);
			break;
		case Bread::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Apple_Pie :Dish
{
	Apple_Pie() { id = 24; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Apple::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Apple::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Vanilla_Pie :Dish
{
	Vanilla_Pie() { id = 25; }
	const std::vector<int> Needed = { Vanilla::id,Flour::id,Milk::id };
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Marshmellow_Pie :Dish
{
	Marshmellow_Pie() { id = 26; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Marshmellow::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Marshmellow::id:
			Ingredents.push_back(rhs);
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Banana_Pie :Dish
{
	Banana_Pie() { id = 27; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Banana::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Banana::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Vanilla_Muffin :Dish
{
	Vanilla_Muffin() { id = 28; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Egg::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Egg::id:
			Ingredents.push_back(rhs);
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Blueberry_Muffin :Dish
{
	Blueberry_Muffin() { id = 29; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Egg::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Blueberry::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Egg::id:
			Ingredents.push_back(rhs);
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Blueberry::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Chocolate_Muffin :Dish
{
	Chocolate_Muffin() { id = 30; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Egg::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Vanilla::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Chocolate::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Flour::id:
				Ingredents.push_back(temp.at(i));
				break;
			case Milk::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Egg::id:
			Ingredents.push_back(rhs);
			break;
		case Vanilla::id:
			Ingredents.push_back(rhs);
			break;
		case Chocolate::id:
			Ingredents.push_back(rhs);
			break;
		case Flour::id:
			Ingredents.push_back(rhs);
			break;
		case Milk::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Apple_Juice :Dish
{
	Apple_Juice() { id = 31; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Apple::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Water::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Apple::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Water::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};

class Orange_Juice :Dish
{
	Orange_Juice() { id = 31; }
	virtual bool add(Dish& rhs) override {
		bool retval = true;
		auto temp = rhs.show();
		for (int i = 0; i < temp.size(); i++) {
			switch (temp.at(i).id)
			{
			case Orange::id:
				if (temp.at(i).Chopped == true) { Ingredents.push_back(temp.at(i)); }
				break;
			case Water::id:
				Ingredents.push_back(temp.at(i));
				break;
			}
		}
	}
	virtual bool add(Ingredient& rhs) override {
		switch (rhs.id)
		{
		case Orange::id:
			if (rhs.Chopped == true) { Ingredents.push_back(rhs); }
			break;
		case Water::id:
			Ingredents.push_back(rhs);
			break;
		}
	}
	virtual std::vector<Ingredient> show() override {
		return Ingredents;//may cause problems (will cause problems in python but maybe not here)
	}
};