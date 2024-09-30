#include <stdio.h>
#include <Windows.h>

template <typename Type>
Type Min(Type num1, Type num2) {
	
	if (num1 < num2){
		return num1;
	}
	else/* if (num1 > num2) */{
		return num2;
	}
}

template<>
char Min(char num1, char num2) {
	
	char str[] = "数字以外は代入出来ません";
	
	printf("%s\n", str);

	return 0;
}


int main(){

	int numInt1 = 99;
	int numInt2 = 100;
	int numInt = Min(numInt1, numInt2);
	printf("%d\n",numInt);

	float numFloat1 = 99.9f;
	float numFloat2 = 10.1f;
	float numFloat = Min(numFloat1, numFloat2);
	printf("%f\n", numFloat);

	double numDouble1 = 99.9f;
	double numDouble2 = 10.1f;
	double numDouble = Min(numDouble1, numDouble2);
	printf("%f\n", numDouble);
	
	char numChar1 = 99;
	char numChar2 = 10;
	char numChar = Min(numChar1, numChar2);

	return 0;
}