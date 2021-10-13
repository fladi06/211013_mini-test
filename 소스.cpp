#include <iostream>

using namespace std;

class Player
{
public:
	Player();
	~Player();

	int HP;
	int MP;
	int Gold;

	void Attack();
	void Move();
};
class Monster
{
public:
	Monster();
	~Monster();

	int HP;
	int MP;

	virtual void Attack();
	virtual void Move();
};
class Goblin : public Monster
{
public:
	Goblin();
	~Goblin();

	void Attack() override;
	void Move() override;
};
class WildPig : public Monster
{
public:
	WildPig();
	~WildPig();

	void Attack() override;
	void Move() override;
};
class Slime : public Monster
{
public:
	Slime();
	~Slime();

	void Attack() override;
	void Move() override;
};

int main()
{

	return 0;
}

