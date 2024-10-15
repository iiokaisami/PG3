#include <stdio.h>
#include <Windows.h>
#include "random"

int Correct(int dice){
    printf("%d !! 正解!! \n", dice);
    return 0;
}

int Miss(int dice){
    printf("%d  不正解\n", dice);
    return 0;
}

int DiceRoll() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return std::rand() % 6 + 1;
}

void SetTimeout(int seconds) {
    Sleep(seconds);
}

int main() {

    int inputNum;
    printf("奇数なら1 偶数なら2 を入力してください\n ");
    scanf_s("%d", &inputNum);

    int dice = rand() % 6 + 1;
    int whiteTime = 3000;
    int (*result)(int);

    // 3秒間の待機
    printf("結果は....\n ");   
    SetTimeout(whiteTime);
    printf("サイコロ :  ");


    auto checkResult = [dice, inputNum, &result]() {

        bool isDiceOddNumber = (dice % 2 == 1);
        bool isUserOddNumber = (inputNum == 1);

        if ((isDiceOddNumber && isUserOddNumber) || (!isDiceOddNumber && !isUserOddNumber)) {
            result = Correct;
        }
        else {
            result = Miss;
        }

        };

    checkResult();

    printf("%d\n", result(dice));

    return 0;
}