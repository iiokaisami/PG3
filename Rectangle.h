#pragma once

#include "Shape.h"

class Rectangl : public Shape
{
public:

	Rectangl();
	~Rectangl();

	void Size() override;
	void Draw() override;

private:

	Vector2 radius_ = { 9.0f,18.0f };
	float area_ = 0;
};

