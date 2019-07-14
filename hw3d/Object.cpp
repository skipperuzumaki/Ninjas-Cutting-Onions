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
	model.Draw(gfx, transformation);//Warning Transformation XMMATRIX to FXMMATRIX
}

void Object::update()
{
	transformation = rotationZ * translation * rotation;
}

void Object::translate(float x, float y)
{
	translation = translation * DirectX::XMMatrixTranslation(x, y, 0);
}

void Object::rotate(float theta)
{
	rotation = rotation * DirectX::XMMatrixRotationZ(theta);
}

void Object::rotateZ(float theta)
{
	rotationZ = rotationZ * DirectX::XMMatrixRotationZ(theta);
}

int Object::getid()
{
	return id;
}
