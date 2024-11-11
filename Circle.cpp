#include "Circle.h"

Circle::Circle(){}

Circle::~Circle(){}

void Circle::Size()
{

	area_ = radius_.x * radius_.y * pi;
}

void Circle::Draw()
{

	printf("面積は %.6f\n", area_);
}
