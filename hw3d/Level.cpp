#include "Level.h"

Platform::Platform(std::string filename)
{
}

Platform::~Platform()
{
}

void Platform::draw(Graphics& gfx)
{
	for (int i = 0; i < StaticObjects.size(); i++) {
		StaticObjects.at(i)->advance();
		StaticObjects.at(i)->Draw(gfx);
	}
	for (int i = 0; i < DynamicObjects.size(); i++) {
		DynamicObjects.at(i)->advance();
		DynamicObjects.at(i)->Draw(gfx);
	}
}

void Platform::update(float dt, Keyboard& kbd)
{
	//update object as per object transformations
	//using object.Translate and object.Rotate
	//<imp> followed by a oject.update
	for (int i = 0; i < StaticObjects.size(); i++) {
		StaticObjects.at(i)->rotate(dt);
	}
	for (int i = 0; i < StaticObjects.size(); i++) {
		StaticObjects.at(i)->update();
	}
	for (int i = 0; i < DynamicObjects.size(); i++) {
		bool touch = false;
		for (int j = 0; j < StaticObjects.size(); j++) {
			try {
				//might work might not
				Catchable* cach = reinterpret_cast<Catchable*>(StaticObjects.at(j));
				Throwable* thr = reinterpret_cast<Throwable*>(DynamicObjects.at(i));
				if (cach->extent.intersecting(thr->extent))
				{
					cach->OnCatch(*thr);
					touch = true;
				}

			}
			catch(...){}
		}
		if (!touch)
		{
			DynamicObjects.at(i)->update();
		}
	}
}

int Platform::getid()
{
	return id;
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
