#pragma once

#include "Human.h"

class Student : public Human
{
public:
	
	Student();
	~Student() override;

	void Lesson() override;
};

