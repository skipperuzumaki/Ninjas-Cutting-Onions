#include "Turret.h"

TurretAmmo::TurretAmmo(std::string name)
	:
	Object(std::string("Models/Sphere.obj"),true)
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

Turret::Turret(std::string name)
{
}

bool Turret::Intersecting(std::pair<float, float> start, std::pair<float, float> end)
{
	return false;
}

void Turret::OnInteract()
{
}

void Turret::shoot()
{
}
