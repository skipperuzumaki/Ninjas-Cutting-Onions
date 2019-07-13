#include "Level.h"

Platform::Platform(std::string filename)
{
}

Platform::~Platform()
{
}

void Platform::draw(Graphics& gfx)
{
	for (int i = 0; i < objects.size(); i++) {
		objects.at(i).Draw(gfx);
	}
}

void Platform::update(float dt, Keyboard& kbd)
{
	//update object as per object transformations
}

int Platform::getid()
{
	return 0;
}

Level::Level(int pfid, std::pair<Platform::Descriptor, Platform::Descriptor> inipos)
{
	//TODO Make Codex for Platforms and assign platforms based on pfid
	pos = inipos;
}

Level::~Level()
{
}

void Level::Draw(Graphics& gfx)
{
	platforms.first.draw(gfx);
	platforms.second.draw(gfx);
}

void Level::Update(float dt, Keyboard& kbd)
{
	platforms.first.update(dt, kbd);
	platforms.second.update(dt, kbd);
}
