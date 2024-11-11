#pragma once

#include "Human.h"

class Teacher : public Human
{
public:

	Teacher();
	~Teacher() override;

	void Lesson() override;
};

