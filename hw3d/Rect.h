#pragma once
#include <string>

class Rect
{
public:
	Rect(std::pair<float, float> top, std::pair<float, float> right, std::pair<float, float> bottom, std::pair<float, float> left)
	{
		Top = top;
		Right = right;
		Bottom = bottom;
		Left = left;
	}
	bool intersectting(Rect& rhs)
	{

	}
private:
	std::pair<float, float> Top;
	std::pair<float, float> Right;
	std::pair<float, float> Bottom;
	std::pair<float, float> Left;

};