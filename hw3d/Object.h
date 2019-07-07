#pragma once
#include "Mesh.h"
#include "Graphics.h"
#include <string>

class Interaction
{

};

class Object
{
public:
	Object(std::string filename, bool movable, Interaction& inter);
	~Object();
	void Draw(Graphics& gfx);
	void update();
	int getid();
private:
	int id;
	Interaction inter;
	Model model;
};