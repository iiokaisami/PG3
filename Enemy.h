#pragma once

class Enemy
{
public:
	
	Enemy();
	~Enemy();

	void Update();

	void Approach();

	void Shoot();

	void Leave();

private:

	enum class Phase
	{
		Approach,
		Shoot,
		Leave,
	};

	Phase phase_ = Enemy::Phase::Approach;

	static void (Enemy::*spPhaseTable[])();

	size_t whiteTime_ = 3000;
};