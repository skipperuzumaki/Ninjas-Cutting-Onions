#pragma once
#include "Mesh.h"
#include "Graphics.h"
#include <string>
#include <DirectXMath.h>
#include <vector>

class Object
{
public:
	Object(Graphics& gfx, std::vector<std::string> filenames);
	~Object();
	void Draw(Graphics& gfx);
	void update();
	void advance();
	void frameto(int frame);
	int currframe();
	void translate(float x, float y);
	void rotate(float theta);
	void rotateZ(float theta);
	int getid();
private:
	int id;
	int n_mdels;
	int curr = 0;
	std::vector<Model> models;
	DirectX::XMMATRIX translation = DirectX::XMMatrixIdentity();
	DirectX::XMMATRIX rotation = DirectX::XMMatrixIdentity();
	DirectX::XMMATRIX rotationZ = DirectX::XMMatrixIdentity();
	DirectX::XMMATRIX transformation = DirectX::XMMatrixIdentity();
};