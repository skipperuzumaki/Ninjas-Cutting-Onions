#pragma once
#include "Object.h"
#include <vector>
#include <string>
#include "Graphics.h"
#include "Keyboard.h"

class Platform
{
public:
	struct Descriptor
	{
		float x;
		float y;
		float theta;
	};
	Platform() = default;
	Platform(std::string filename);
	~Platform();
	void draw(Graphics& gfx);
	void update(float dt, Keyboard& kbd);//TODO keyboard events
	int getid();
private:
	int id;
	std::vector<Object> objects;
};

class Level
{
public:
	Level(int pfid, std::pair<Platform::Descriptor, Platform::Descriptor> inipos);
	~Level();
	void Draw(Graphics& gfx);
	void Update(float dt, Keyboard& kbd);//TODO keyboard events
private:
	std::pair<Platform, Platform> platforms;
	std::pair<Platform::Descriptor, Platform::Descriptor> pos;
};
