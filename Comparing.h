#pragma once

template <typename T>

class Comparing
{
public:

	T num1, num2;

	Comparing(T num1, T num2) :num1(num1), num2(num2) {};

	T Min(T num1, T num2)
	{
		if (num1 < num2)
		{
			return num1;
		}
		else
		{
			return num2;
		}
	};
};