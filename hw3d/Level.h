#pragma once
#include "Object.h"
#include <vector>
#include <string>
#include "Graphics.h"

class Platform
{
public:
	struct Descriptor
	{
		float x;
		float y;
		float theta;
	};
	Platform(std::string filename);
	~Platform();
	void draw(Graphics& gfx);
	void update(float dt);//TODO keyboard events
	int getid();
private:
	int id;
	std::vector<Object> objects;
};

class Level
{
public:
	Level(int pfid, std::pair<Platform::Descriptor, Platform::Descriptor>);
	~Level();
	void Draw(Graphics& gfx);
	void Update(float dt);//TODO keyboard events
private:
	std::pair<Platform, Platform> platforms;
	std::pair<Platform::Descriptor, Platform::Descriptor> pos;
};
