#pragma once

#include <stdio.h>

struct Vector2
{
	float x;
	float y;
};


class Shape
{
public:

	Shape();
	~Shape();

	virtual void Size() = 0;
	virtual void Draw() = 0;
};