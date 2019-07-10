#pragma once
#include "Mesh.h"
#include "Graphics.h"
#include <string>

class Object
{
public:
	Object(std::string filename, bool movable);
	~Object();
	void Draw(Graphics& gfx);
	void update();
	int getid();
private:
	int id;
	Model model;
};