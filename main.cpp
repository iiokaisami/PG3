#include <stdio.h>
#include <Windows.h>

#include "Enemy.h"

int main() {

    Enemy* enemy = new Enemy;
   
    enemy->Update();


    return 0;

    delete enemy;
}