#pragma once
#include <math.h>

struct Position2D
{
	float x;
	float y;

	Position2D() {}
	Position2D(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};