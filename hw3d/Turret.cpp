#include "Turret.h"

TurretAmmo::TurretAmmo(Graphics& gfx, std::string name)
	:
	Object(gfx,std::string("Models/Sphere.obj"),true)
{
	_name = name;
}

void TurretAmmo::OnThrow(std::pair<float, float> start, std::pair<float, float> end)
{
	velocity = std::make_pair(end.first - start.first,end.second-start.second);
}

void TurretAmmo::Update()
{
	//TODO add time dependence
	pos.first = pos.first + velocity.first;
	pos.second = pos.second + velocity.second;
}

Turret::Turret(Graphics& gfx, std::string name)
	:
	Object(gfx,std::string("Models/Turret.obj"), true)
{
}

void Turret::OnInteract()
{
}

void Turret::shoot()
{
}
