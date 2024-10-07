#include <stdio.h>

template <typename Type>
Type General(Type money, Type time) {

	return money * time;
}

template <typename Type>
Type Recursive(Type money, Type time) {
	
	auto result = 0;

	if (time <= 1) {
		return money;
	}

	result = Recursive(money * 2 - 50, time - 1);

	return result;
}


int main(){

	int recursiveMoney = 100;
	int generalMoney = 1072;
	int time = 4;
	int getRecursiveMoney = Recursive(recursiveMoney, time);
	int getGeneralMoney = General(generalMoney, time);

	printf("%d時間働いたとき、一般的な資金体系だと %d 円、再帰的な資金体系だと %d 円\n", time, getGeneralMoney, getRecursiveMoney);

	return 0;
}