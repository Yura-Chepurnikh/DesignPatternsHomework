#include <iostream>

class GameManager
{
private:
	GameManager() {}

public:

	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	static GameManager& getInstance()
	{
		static GameManager instance;
		return instance;
	}

	void startGame()
	{
		std::cout << "Game started!\n";
	}

	void stopGame()
	{
		std::cout << "Game stopped!\n";
	}
};

int main()
{
	GameManager& gm = GameManager::getInstance();
	gm.startGame();

	GameManager& gm2 = GameManager::getInstance();
	gm2.stopGame();

	return 0;
}