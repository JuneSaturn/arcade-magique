#include "Common.h"

// Minesweeper Header
#include "Minesweeper.h"

using namespace std;

string gamename = "Minesweeper";
int mines = 25;

int main()
{
	// Initialize Random Engine
	mt19937 rng(std::random_device{}());

	Game& game = Game::getInstance();
	game.init(45, 16, 10);

	while (true) {

		if (isKeyPressed()) {
			sayHi(gamename);
			break;
		}
	}

	game.start();

	return 0;
}