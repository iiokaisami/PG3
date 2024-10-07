#include <stdio.h>

template <typename Type>
Type General(Type money, Type time) {

	return money * time;
}

template <typename Type>
Type Recursive(Type money, Type time) {
	
	auto result = 0;

	if (time == 1) {
		return money;
	}
	else if (time < 1)
	{
		return result;
	}

	result = Recursive(money * 2 - 50, time - 1);

	return result;
}


int main(){

	int recursiveMoney = 100;
	int generalMoney = 1072;
	const int time = 11;
	int getRecursiveMoney = 0;

	for (int i = 0; i < time; i++)
	{
		int hourRecursiveMoney = Recursive(recursiveMoney, i);
		int getGeneralMoney = General(generalMoney, i);

		getRecursiveMoney += hourRecursiveMoney;

		printf("%d時間働いたとき、一般的な資金体系だと %d 円、再帰的な資金体系だと %d 円\n\n", i, getGeneralMoney, getRecursiveMoney);
	}
	

	return 0;
}