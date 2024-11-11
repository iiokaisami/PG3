#pragma once

#include <stdio.h>

class Human
{
public:

	Human();
	virtual ~Human();

	virtual void Lesson();

protected:

	const char* name_;
};