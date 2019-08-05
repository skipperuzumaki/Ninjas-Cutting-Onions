#pragma once
#include "Interfaces.h"
#include "Object.h"
#include <string>
#include <vector>
#include "Graphics.h"
#include "Utils.h"

//TODO complete bassed on stove

std::vector<std::string> stove;
class Stove : Container, Object
{
	Stove(Graphics& gfx)
		:
		Object(gfx,stove)
	{}
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Cooked = true;
		Curring->Cooked = true;
		//TODO add timer
	}
	virtual std::pair<Dish*, Ingredient*> Unload() override
	{
		return std::make_pair<>(Curritem, Curring);
	}
};
std::vector<std::string> oven;
class Oven : Container, Object
{
	Oven(Graphics& gfx)
		:
		Object(gfx, oven)
	{}
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Baked = true;
		//TODO add timer
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
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Steamed = true;
		//TODO add timer
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
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Ground = true;
		//TODO add timer
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
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Chopped = true;
		//TODO add timer
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
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Chopped = true;
		//TODO add timer
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};
std::vector<std::string> grill;
class Grill : Container, Object
{
	Grill(Graphics& gfx)
		:
		Object(gfx, grill)
	{}
	static std::vector<int > Viable_Dishes;//TODO add viable dishes
	static std::vector<int > Viable_Ingredients;//TODO add viable ingredients
	Dish* Curritem = nullptr;
	Ingredient* Curring = nullptr;
	virtual void Accept(Dish* rhs) override
	{
		if (Utils::has(Viable_Dishes, rhs->id)) {
			Curritem = rhs;
			Curring = nullptr;
			Process();
		}
	}
	virtual void Accept(Ingredient* rhs) override
	{
		if (Utils::has(Viable_Ingredients, rhs->id)) {
			Curring = rhs;
			Curritem = nullptr;
			Process();
		}
	}
	virtual void Process() override
	{
		Curritem->Grilled = true;
		//TODO add timer
	}
	virtual Dish* Unload() override
	{
		return Curritem;
	}
};