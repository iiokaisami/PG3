#include "Enemy.h"

#include <Windows.h>
#include <stdio.h>
#include <synchapi.h>


void (Enemy::* Enemy::spPhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Leave
};

Enemy::Enemy(){}

Enemy::~Enemy(){}

void Enemy::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*spPhaseTable[static_cast<size_t>(phase_)])();
	}
}

void Enemy::Approach()
{
	printf("接近フェーズ\n\n");

	Sleep(whiteTime_);
	phase_ = Enemy::Phase::Shoot;
}

void Enemy::Shoot()
{
	printf("射撃フェーズ\n\n");

	Sleep(whiteTime_);
	phase_ = Enemy::Phase::Leave;
}

void Enemy::Leave()
{
	printf("離脱フェーズ\n");

}
