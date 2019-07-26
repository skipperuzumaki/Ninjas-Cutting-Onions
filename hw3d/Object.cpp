#include "Object.h"

Object::Object(Graphics& gfx, std::vector<std::string> filenames)
{
	n_mdels = filenames.size();
	for (int i = 0; i < n_mdels; i++) {
		models.push_back(Model(gfx, filenames.at(i)));
	}
}

Object::~Object()
{
}

void Object::Draw(Graphics& gfx)
{
	models.at(curr).Draw(gfx, transformation);//Warning Transformation XMMATRIX to FXMMATRIX
}

void Object::update()
{
	transformation = rotationZ * translation * rotation;
}

void Object::advance()
{
	curr++;
	if (curr == n_mdels) { curr = 0; }
}

void Object::frameto(int frame)
{
	if (frame < n_mdels) { curr = frame; }
}

int Object::currframe()
{
	return curr;
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
