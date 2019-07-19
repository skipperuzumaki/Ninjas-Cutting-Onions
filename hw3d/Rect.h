#pragma once
#include <string>

class Rect
{
public:
	Rect() = default;
	Rect(std::pair<float, float> top, std::pair<float, float> right, std::pair<float, float> bottom, std::pair<float, float> left)
	{
		Top = top;
		Right = right;
		Bottom = bottom;
		Left = left;
	}
private:
	int sgm(int val)
	{
		if (val == 0) { return 0; }
		else if (val > 0) { return 1; }
		else { return -1; }
	}
	bool lineintersect(std::pair< std::pair<float, float>, std::pair<float, float>> line1, std::pair< std::pair<float, float>, std::pair<float, float>> line2)
	{
		int o1 = sgm((line1.second.second - line1.first.second) * (line2.first.first - line1.second.first) - (line1.second.first - line1.first.first) * (line2.first.second - line1.second.second));
		int o2 = sgm((line2.second.second - line1.first.second) * (line2.first.first - line2.second.first) - (line2.second.first - line1.first.first) * (line2.first.second - line2.second.second));
		int o3 = sgm((line2.second.second - line1.second.second) * (line1.first.first - line2.second.first) - (line2.second.first - line1.second.first) * (line1.first.second - line2.second.second));
		int o4 = sgm((line2.second.second - line1.second.second) * (line2.first.first - line2.second.first) - (line2.second.first - line1.second.first) * (line2.first.second - line2.second.second));
		if (o1 != o2 && o3 != o4)
		{
			return true;
		}
		else { return false; }
	}
	bool inside(std::pair<float, float> point)
	{
		int n_interscets = 0;
		std::pair< std::pair<float, float>, std::pair<float, float>> line = std::make_pair<>(point, std::make_pair<>(point.first, std::numeric_limits<float>::max()));
		std::pair< std::pair<float, float>, std::pair<float, float>> line1 = std::make_pair<>(Top, Left);
		std::pair< std::pair<float, float>, std::pair<float, float>> line2 = std::make_pair<>(Bottom, Left);
		std::pair< std::pair<float, float>, std::pair<float, float>> line3 = std::make_pair<>(Bottom, Right);
		std::pair< std::pair<float, float>, std::pair<float, float>> line4 = std::make_pair<>(Top, Right);
		if (lineintersect(line, line1)) { n_interscets++; }
		if (lineintersect(line, line2)) { n_interscets++; }
		if (lineintersect(line, line3)) { n_interscets++; }
		if (lineintersect(line, line4)) { n_interscets++; }
		if (n_interscets % 2 == 0) { return false; }
		else { return true; }
	}
public:
	bool intersecting(Rect& rhs)
	{
		if (inside(rhs.Top)) { return true; }
		if (inside(rhs.Left)) { return true; }
		if (inside(rhs.Right)) { return true; }
		if (inside(rhs.Bottom)) { return true; }
		return false;
	}
private:
	std::pair<float, float> Top;
	std::pair<float, float> Right;
	std::pair<float, float> Bottom;
	std::pair<float, float> Left;

};