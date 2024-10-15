#include <stdio.h>
#include <Windows.h>
#include "random"

int Correct(int dice)
{
    printf("%d !! 正解!! \n", dice);

    return 0;
}

int Miss(int dice)
{
    printf("%d  不正解\n", dice);

    return 0;
}

int main() {

    int inputNum;
    printf("奇数なら1 偶数なら2 を入力してください\n ");
    scanf_s("%d", &inputNum);

    // サイコロを振って1から6のランダムな数を生成
    int dice = rand() % 6 + 1;
    int witeTime = 3000;
    int (*result)(int);

    // 3秒間の待機
    printf("結果は....\n ");
    Sleep(witeTime);
    printf("サイコロ :  ");

    if ((dice % 2 == 0 && inputNum == 2) || (dice % 2 != 0 && inputNum == 1)) {
        result = Correct;
    }
    else {
        result = Miss;
    }

    printf("%d\n", result(dice));

    return 0;
}
