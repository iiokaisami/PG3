#pragma once

#include "Shape.h"

class Circle : public Shape
{
public:
	
	Circle();
	~Circle() ;

	void Size() override;
	void Draw() override;

private:

	Vector2 radius_ = { 3.0f,3.0f };
	const float pi = 3.14159265f;
	float area_ = 0;
};

