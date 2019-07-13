#pragma once
#include "Mesh.h"
#include "Graphics.h"
#include <string>
#include <DirectXMath.h>


class Object
{
public:
	Object(Graphics& gfx, std::string filename, bool movable);
	~Object();
	void Draw(Graphics& gfx);
	void update();
	void translate(float x, float y);
	void rotate(float theta);
	int getid();
private:
	int id;
	Model model;
	DirectX::FXMMATRIX transformation = DirectX::XMMatrixIdentity();
};