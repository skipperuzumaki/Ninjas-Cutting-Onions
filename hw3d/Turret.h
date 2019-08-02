#pragma once
#include <string>
#include "Object.h"
#include "Interfaces.h"
#include "Rect.h"
#include "Graphics.h"

class TurretAmmo :Object, Throwable, Ingredient
{
public:
	TurretAmmo(Graphics& gfx, std::string name);
	virtual void OnThrow(std::pair<float, float> start, std::pair<float, float> end) override;
	void Update();
private:
	std::string _name;
	std::pair<float, float> velocity;
	std::pair<float, float> pos;
};

class Water : TurretAmmo
{
public:
	Water(Graphics& gfx)
		:
		TurretAmmo(gfx,std::string("Water"))
	{}
	static const int id = 27;
};

class Ketchup : TurretAmmo
{
public:
	Ketchup(Graphics& gfx)
		:
		TurretAmmo(gfx, std::string("Ketchup"))
	{}
	static const int id = 28;
};

class Mayonaise : TurretAmmo
{
public:
	Mayonaise(Graphics& gfx)
		:
		TurretAmmo(gfx, std::string("Mayonaise"))
	{}
	static const int id = 29;
};

class Milk : TurretAmmo
{
public:
	Milk(Graphics& gfx)
		:
		TurretAmmo(gfx, std::string("Milk"))
	{}
	static const int id = 29;
};

class Turret : Object,SpawnBlock,Interactible
{
public:
	Turret(Graphics& gfx, std::string name);
	virtual void OnInteract() override;
	void shoot();
private:
	Rect Extent = Rect(std::make_pair(0, 0), std::make_pair(0, 1), std::make_pair(1, 1), std::make_pair(1, 0));
	std::string name;
	std::pair<float, float> shootloc;
	std::pair<float, float> shootdir;
	float cooldowntime;
	float currcooldown;
};