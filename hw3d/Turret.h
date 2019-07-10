#pragma once
#include <string>
#include "Object.h"
#include "Interfaces.h"
#include "Rect.h"

class TurretAmmo :Object, Throwable, Ingredient
{
public:
	TurretAmmo(std::string name);
	virtual void OnThrow(std::pair<float, float> start, std::pair<float, float> end) override;
	void Update();
private:
	std::string _name;
	std::pair<float, float> velocity;
	std::pair<float, float> pos;
};

class Turret : Object,SpawnBlock,Interactible
{
public:
	Turret(std::string name);
	virtual void OnInteract() override;
	void shoot();
private:
	Rect Extent;
	std::string name;
	std::pair<float, float> shootloc;
	std::pair<float, float> shootdir;
	float cooldowntime;
	float currcooldown;
};