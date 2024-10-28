#include <stdio.h>
#include <Windows.h>

#include "Comparing.h"

int main() {

    int numInt1 = 99;
    int numInt2 = 100;

    float numFloat1 = 99.9f;
    float numFloat2 = 10.1f;

    double numDouble1 = 10.1f;
    double numDouble2 =  9.9f;

    Comparing<int> resultInt(numInt1, numInt2);
    int numInt = resultInt.Min(resultInt.num1, resultInt.num2);
    printf("%d\n", numInt);

    Comparing<float> resultFloat(numFloat1, numFloat2);
    float numFloat = resultFloat.Min(resultFloat.num1, resultFloat.num2);
    printf("%f\n", numFloat);

    Comparing<double> resultDouble(numDouble1, numDouble2);
    double numDouble = resultDouble.Min(resultDouble.num1, resultDouble.num2);
    printf("%f\n", numDouble);

    return 0;
}