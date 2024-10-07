#include <stdio.h>
#include "random"

template <typename Type>
Type RollDice(Type dice) 
{
	dice = rand() % 6 + 1;

	return 0;
}

void Correct(char answer)
{
	printf("%s !! 正解!! \n",answer);
}

void Miss(char answer)
{
	printf("%s !! 不正解\n", answer);
}

int main(){

	char odd[] = "奇数";
	char even[] = "偶数";
	int bet;
	auto dice = 0;

	printf("奇数なら 1 、偶数なら 2 を入力してね!\n");
	scanf("%d",&bet);
	printf("%d\n\n", &bet);

	RollDice(dice);

	if (dice % 2 == 1)
	{

	}

	typedef int (*answer)();




	return 0;
}