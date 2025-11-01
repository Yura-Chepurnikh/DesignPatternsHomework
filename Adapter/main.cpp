#include <iostream>


struct IEnemy
{
	virtual void move(int x, int y) = 0;
	virtual ~IEnemy() {}
};

class OldEnemy
{
public:
	void run()
	{
		std::cout << "Old enemy running!\n";
	}
};

class EnemyAdapter : public IEnemy {
public:
	EnemyAdapter(OldEnemy* enemy) : oldEnemy(enemy) {}

	void move(int x, int y) override
	{
		oldEnemy->run();
	}
private:
	OldEnemy* oldEnemy;
};


void gameUpdate(IEnemy* enemy)
{
	enemy->move(10, 20);
}


int main() {
	OldEnemy* old = new OldEnemy();

	IEnemy* enemy = new EnemyAdapter(old);
	gameUpdate(enemy);
	delete enemy;
	delete old;
}