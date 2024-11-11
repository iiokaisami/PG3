#include "Rectangle.h"

Rectangl::Rectangl(){}

Rectangl::~Rectangl(){}

void Rectangl::Size()
{

	area_ = radius_.x * radius_.y;
}

void Rectangl::Draw()
{

	printf("面積は %.2f\n", area_);
}
