#include "Object.h"

Object::Object(Graphics& gfx, std::string filename, bool movable)
	:
	model(gfx,filename)
{
}

Object::~Object()
{
}

void Object::Draw(Graphics& gfx)
{
	model.Draw(gfx, transformation);
}
